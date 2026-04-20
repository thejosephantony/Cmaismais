#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <map>
#include <optional>

class Calculator {
private:
    std::string display;
    double currentValue;
    double memoryValue;
    char lastOperation;
    bool newInput;
    bool errorState;

public:
    Calculator() {
        clear();
        memoryValue = 0.0;
    }

    void clear() {
        display = "0";
        currentValue = 0.0;
        lastOperation = '\0';
        newInput = true;
        errorState = false;
    }

    void inputDigit(int digit) {
        if (errorState) clear();

        if (newInput) {
            display = std::to_string(digit);
            newInput = false;
        } else {
            if (display == "0") {
                display = std::to_string(digit);
            } else {
                display += std::to_string(digit);
            }
        }
    }

    void inputDecimal() {
        if (errorState) clear();

        if (newInput) {
            display = "0.";
            newInput = false;
        } else if (display.find('.') == std::string::npos) {
            display += ".";
        }
    }

    void performOperation(char op) {
        if (errorState) return;

        double inputValue = std::stod(display);

        if (lastOperation != '\0' && !newInput) {
            calculate();
        } else {
            currentValue = inputValue;
        }

        lastOperation = op;
        newInput = true;
    }

    void calculate() {
        if (errorState || lastOperation == '\0') return;

        double inputValue = std::stod(display);

        try {
            switch (lastOperation) {
                case '+': currentValue += inputValue; break;
                case '-': currentValue -= inputValue; break;
                case '*': currentValue *= inputValue; break;
                case '/':
                    if (inputValue == 0) {
                        errorState = true;
                        display = "Erro: Div/0";
                        return;
                    }
                    currentValue /= inputValue;
                    break;
                case '^': currentValue = pow(currentValue, inputValue); break;
            }

            // Formatação do resultado
            std::ostringstream oss;
            if (fmod(currentValue, 1.0) == 0.0) {
                oss << static_cast<int>(currentValue);
            } else {
                oss.precision(10);
                oss << std::fixed << currentValue;
                std::string str = oss.str();
                str.erase(str.find_last_not_of('0') + 1, std::string::npos);
                if (str.back() == '.') str.pop_back();
                display = str;
                return;
            }
            display = oss.str();
        } catch (...) {
            errorState = true;
            display = "Erro";
        }
    }

    void memoryStore() {
        memoryValue = std::stod(display);
    }

    void memoryRecall() {
        if (errorState) clear();
        std::ostringstream oss;
        oss << memoryValue;
        display = oss.str();
        newInput = true;
    }

    void memoryClear() {
        memoryValue = 0.0;
    }

    void memoryAdd() {
        memoryValue += std::stod(display);
    }

    void memorySubtract() {
        memoryValue -= std::stod(display);
    }

    void squareRoot() {
        double value = std::stod(display);
        if (value < 0) {
            errorState = true;
            display = "Erro: Raiz neg";
        } else {
            currentValue = sqrt(value);
            std::ostringstream oss;
            oss << currentValue;
            display = oss.str();
            newInput = true;
        }
    }

    void percentage() {
        double value = std::stod(display);
        currentValue = value / 100.0;
        display = std::to_string(currentValue);
        newInput = true;
    }

    void toggleSign() {
        if (display != "0") {
            if (display[0] == '-') {
                display = display.substr(1);
            } else {
                display = "-" + display;
            }
        }
    }

    std::string getDisplay() const { return display; }
    bool hasError() const { return errorState; }
};

class Button {
private:
    sf::RectangleShape shape;
    sf::Text text;
    sf::Color normalColor;
    sf::Color hoverColor;
    sf::Color pressColor;
    bool isPressed;

public:
    Button(const std::string& label, const sf::Font& font,
           const sf::Vector2f& position, const sf::Vector2f& size)
        : text(font, label, 24)
    {
        // Cores do botão
        normalColor = sf::Color(70, 70, 70);
        hoverColor = sf::Color(100, 100, 100);
        pressColor = sf::Color(50, 50, 50);

        // Configurar forma do botão
        shape.setSize(size);
        shape.setPosition(position);
        shape.setFillColor(normalColor);
        shape.setOutlineThickness(2);
        shape.setOutlineColor(sf::Color::Black);

        // Configurar texto
        text.setFillColor(sf::Color::White);

        // SFML 3.0: getLocalBounds() retorna Rect que tem getPosition() e getSize()
        sf::FloatRect textBounds = text.getLocalBounds();
        sf::Vector2f textSize = textBounds.getSize();
        sf::Vector2f textPos = textBounds.getPosition();
        
        // Centralizar texto
        text.setOrigin(textPos + textSize / 2.0f);
        text.setPosition(position + size / 2.0f);

        isPressed = false;
    }

    void draw(sf::RenderWindow& window) {
        window.draw(shape);
        window.draw(text);
    }

    bool contains(const sf::Vector2f& point) const {
        return shape.getGlobalBounds().contains(point);
    }

    void update(const sf::Vector2f& mousePos, bool mousePressed) {
        if (contains(mousePos)) {
            if (mousePressed) {
                shape.setFillColor(pressColor);
                isPressed = true;
            } else {
                shape.setFillColor(hoverColor);
                if (isPressed) {
                    isPressed = false;
                }
            }
        } else {
            shape.setFillColor(normalColor);
            isPressed = false;
        }
    }

    bool isClicked(const sf::Vector2f& mousePos, bool mouseReleased) const {
        return contains(mousePos) && mouseReleased;
    }

    std::string getLabel() const {
        return text.getString();
    }

    void setColor(const sf::Color& color) {
        normalColor = color;
        hoverColor = sf::Color(
            std::min(color.r + 30, 255),
            std::min(color.g + 30, 255),
            std::min(color.b + 30, 255)
        );
        pressColor = sf::Color(
            std::max(color.r - 20, 0),
            std::max(color.g - 20, 0),
            std::max(color.b - 20, 0)
        );
        shape.setFillColor(normalColor);
    }
};

int main() {
    // Criar janela
    sf::RenderWindow window(sf::VideoMode({400u, 600u}), "Calculadora SFML 3.0");
    window.setFramerateLimit(60);

    // Carregar fonte
    sf::Font font;
    if (!font.openFromFile("C:/Windows/Fonts/arial.ttf")) {
        std::cerr << "Erro ao carregar fonte!" << std::endl;
        return 1;
    }

    // Criar calculadora
    Calculator calc;

    // Criar display
    sf::RectangleShape displayBackground(sf::Vector2f(380.f, 80.f));
    displayBackground.setPosition({10.f, 10.f});
    displayBackground.setFillColor(sf::Color(40, 40, 40));
    displayBackground.setOutlineThickness(2.f);
    displayBackground.setOutlineColor(sf::Color::Black);

    // Criar texto do display
    sf::Text displayText(font, "0", 36);
    displayText.setPosition({20.f, 20.f});
    displayText.setFillColor(sf::Color::White);

    // Definir botões
    std::vector<Button> buttons;
    std::vector<std::string> buttonLabels = {
        "C", "√", "%", "/",
        "7", "8", "9", "*",
        "4", "5", "6", "-",
        "1", "2", "3", "+",
        "+/-", "0", ".", "=",
        "MC", "MR", "M+", "M-"
    };

    // Cores especiais para alguns botões
    std::map<std::string, sf::Color> specialColors = {
        {"C", sf::Color(200, 50, 50)},
        {"=", sf::Color(50, 150, 200)},
        {"/", sf::Color(100, 100, 150)},
        {"*", sf::Color(100, 100, 150)},
        {"-", sf::Color(100, 100, 150)},
        {"+", sf::Color(100, 100, 150)},
        {"√", sf::Color(150, 100, 150)},
        {"%", sf::Color(150, 100, 150)}
    };

    // Criar botões
    float startX = 10.f;
    float startY = 100.f;
    float buttonWidth = 90.f;
    float buttonHeight = 70.f;
    float spacing = 5.f;

    for (int i = 0; i < 6; i++) {  // 6 linhas
        for (int j = 0; j < 4; j++) {  // 4 colunas
            int index = i * 4 + j;
            if (index >= buttonLabels.size()) break;

            float x = startX + j * (buttonWidth + spacing);
            float y = startY + i * (buttonHeight + spacing);

            Button btn(buttonLabels[index], font,
                      sf::Vector2f(x, y),
                      sf::Vector2f(buttonWidth, buttonHeight));

            // Aplicar cor especial se existir
            auto it = specialColors.find(buttonLabels[index]);
            if (it != specialColors.end()) {
                btn.setColor(it->second);
            }

            buttons.push_back(btn);
        }
    }

    // Variáveis de controle do mouse
    sf::Vector2f mousePos;
    bool mousePressed = false;
    bool mouseReleased = false;

    // Loop principal
    while (window.isOpen()) {
        // Processar eventos
        while (std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            else if (const auto* mouseButton = event->getIf<sf::Event::MouseButtonPressed>()) {
                if (mouseButton->button == sf::Mouse::Button::Left) {
                    mousePressed = true;
                }
            }
            else if (const auto* mouseButton = event->getIf<sf::Event::MouseButtonReleased>()) {
                if (mouseButton->button == sf::Mouse::Button::Left) {
                    mousePressed = false;
                    mouseReleased = true;
                }
            }
            else if (const auto* mouseMove = event->getIf<sf::Event::MouseMoved>()) {
                mousePos = sf::Vector2f(mouseMove->position);
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
                // Números (linha superior)
                if (keyPressed->scancode >= sf::Keyboard::Scan::Num1 &&
                    keyPressed->scancode <= sf::Keyboard::Scan::Num9) {
                    int digit = static_cast<int>(keyPressed->scancode) - 
                               static_cast<int>(sf::Keyboard::Scan::Num1) + 1;
                    calc.inputDigit(digit);
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::Num0) {
                    calc.inputDigit(0);
                }
                // Números do teclado numérico
                else if (keyPressed->scancode >= sf::Keyboard::Scan::Numpad1 &&
                         keyPressed->scancode <= sf::Keyboard::Scan::Numpad9) {
                    int digit = static_cast<int>(keyPressed->scancode) - 
                               static_cast<int>(sf::Keyboard::Scan::Numpad1) + 1;
                    calc.inputDigit(digit);
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::Numpad0) {
                    calc.inputDigit(0);
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::Period ||
                         keyPressed->scancode == sf::Keyboard::Scan::Comma) {
                    calc.inputDecimal();
                }
                // Operadores - SFML 3.0 usa Numpad*
                else if (keyPressed->scancode == sf::Keyboard::Scan::NumpadAdd) {
                    calc.performOperation('+');
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::NumpadSubtract) {
                    calc.performOperation('-');
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::NumpadMultiply) {
                    calc.performOperation('*');
                }
                else if (keyPressed->scancode == sf::Keyboard::Scan::NumpadDivide) {
                    calc.performOperation('/');
                }
                // Enter/igual
                else if (keyPressed->scancode == sf::Keyboard::Scan::Enter ||
                         keyPressed->scancode == sf::Keyboard::Scan::Equal ||
                         keyPressed->scancode == sf::Keyboard::Scan::NumpadEnter) {
                    calc.calculate();
                }
                // Limpar
                else if (keyPressed->scancode == sf::Keyboard::Scan::Escape ||
                         keyPressed->scancode == sf::Keyboard::Scan::Delete) {
                    calc.clear();
                }
            }
        }

        // Atualizar display
        displayText.setString(calc.getDisplay());

        // Atualizar e verificar botões
        for (auto& btn : buttons) {
            btn.update(mousePos, mousePressed);

            if (btn.isClicked(mousePos, mouseReleased)) {
                std::string label = btn.getLabel();

                // Números
                if (label >= "0" && label <= "9") {
                    calc.inputDigit(std::stoi(label));
                }
                // Operações básicas
                else if (label == "+" || label == "-" || label == "*" || label == "/") {
                    calc.performOperation(label[0]);
                }
                // Igual
                else if (label == "=") {
                    calc.calculate();
                }
                // Clear
                else if (label == "C") {
                    calc.clear();
                }
                // Ponto decimal
                else if (label == ".") {
                    calc.inputDecimal();
                }
                // Raiz quadrada
                else if (label == "√") {
                    calc.squareRoot();
                }
                // Porcentagem
                else if (label == "%") {
                    calc.percentage();
                }
                // Mudar sinal
                else if (label == "+/-") {
                    calc.toggleSign();
                }
                // Memória
                else if (label == "MC") {
                    calc.memoryClear();
                }
                else if (label == "MR") {
                    calc.memoryRecall();
                }
                else if (label == "M+") {
                    calc.memoryAdd();
                }
                else if (label == "M-") {
                    calc.memorySubtract();
                }
            }
        }

        mouseReleased = false;

        // Limpar janela
        window.clear(sf::Color(30, 30, 30));

        // Desenhar elementos
        window.draw(displayBackground);
        window.draw(displayText);

        for (auto& btn : buttons) {
            btn.draw(window);
        }

        // Exibir
        window.display();
    }

    return 0;
}