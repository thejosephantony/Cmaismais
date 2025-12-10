#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

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
                // Remove zeros desnecessários
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
           const sf::Vector2f& position, const sf::Vector2f& size) {

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
        text.setString(label);
        text.setFont(font);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::White);

        // Centralizar texto
        sf::FloatRect textBounds = text.getLocalBounds();
        text.setOrigin(textBounds.left + textBounds.width / 2.0f,
                       textBounds.top + textBounds.height / 2.0f);
        text.setPosition(position.x + size.x / 2.0f,
                         position.y + size.y / 2.0f);

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
    sf::RenderWindow window(sf::VideoMode(400, 600), "Calculadora SFML");
    window.setFramerateLimit(60);

    // Carregar fonte
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        // Tentar fonte padrão
        if (!font.loadFromFile("C:/Windows/Fonts/arial.ttf")) {
            std::cerr << "Erro ao carregar fonte!" << std::endl;
            return 1;
        }
    }

    // Criar calculadora
    Calculator calc;

    // Criar display
    sf::RectangleShape displayBackground(sf::Vector2f(380, 80));
    displayBackground.setPosition(10, 10);
    displayBackground.setFillColor(sf::Color(40, 40, 40));
    displayBackground.setOutlineThickness(2);
    displayBackground.setOutlineColor(sf::Color::Black);

    sf::Text displayText("", font, 36);
    displayText.setPosition(20, 20);
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
    float startX = 10;
    float startY = 100;
    float buttonWidth = 90;
    float buttonHeight = 70;
    float spacing = 5;

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
        sf::Event event;
        mouseReleased = false;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePressed = true;
                }
            }

            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePressed = false;
                    mouseReleased = true;
                }
            }

            if (event.type == sf::Event::MouseMoved) {
                mousePos = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);
            }

            // Suporte a teclado
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code >= sf::Keyboard::Num0 &&
                    event.key.code <= sf::Keyboard::Num9) {
                    int digit = event.key.code - sf::Keyboard::Num0;
                    calc.inputDigit(digit);
                } else if (event.key.code == sf::Keyboard::Numpad0 &&
                           event.key.code <= sf::Keyboard::Numpad9) {
                    int digit = event.key.code - sf::Keyboard::Numpad0;
                    calc.inputDigit(digit);
                } else if (event.key.code == sf::Keyboard::Period ||
                           event.key.code == sf::Keyboard::Comma) {
                    calc.inputDecimal();
                } else if (event.key.code == sf::Keyboard::Add) {
                    calc.performOperation('+');
                } else if (event.key.code == sf::Keyboard::Subtract) {
                    calc.performOperation('-');
                } else if (event.key.code == sf::Keyboard::Multiply) {
                    calc.performOperation('*');
                } else if (event.key.code == sf::Keyboard::Divide) {
                    calc.performOperation('/');
                } else if (event.key.code == sf::Keyboard::Enter ||
                           event.key.code == sf::Keyboard::Equal) {
                    calc.calculate();
                } else if (event.key.code == sf::Keyboard::Escape ||
                           event.key.code == sf::Keyboard::Delete) {
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
