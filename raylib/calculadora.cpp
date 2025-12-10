#include "raylib.h"
#include <string>
#include <sstream>
#include <cmath>
#include <vector>

// ================= CONFIGURAÇÃO =================
#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 600
#define BUTTON_SIZE 70
#define BUTTON_MARGIN 10
#define DISPLAY_HEIGHT 100

// ================= CORES =================
Color COLOR_BG = { 30, 30, 30, 255 };
Color COLOR_DISPLAY_BG = { 40, 40, 40, 255 };
Color COLOR_BUTTON_NUMBER = { 70, 70, 70, 255 };
Color COLOR_BUTTON_OPERATOR = { 50, 100, 150, 255 };
Color COLOR_BUTTON_SPECIAL = { 150, 50, 50, 255 };
Color COLOR_BUTTON_EQUAL = { 200, 100, 50, 255 };

// ================= CALCULADORA =================
class Calculator {
private:
    std::string display;
    double currentValue;
    char lastOperation;
    bool newInput;

public:
    Calculator() {
        clear();
    }

    void clear() {
        display = "0";
        currentValue = 0;
        lastOperation = '\0';
        newInput = true;
    }

    void inputDigit(int digit) {
        if (newInput || display == "0") {
            display = std::to_string(digit);
            newInput = false;
        } else {
            display += std::to_string(digit);
        }
    }

    void inputDecimal() {
        if (display.find('.') == std::string::npos) {
            if (newInput) {
                display = "0.";
                newInput = false;
            } else {
                display += ".";
            }
        }
    }

    void performOperation(char op) {
        if (lastOperation != '\0' && !newInput) {
            calculate();
        } else {
            currentValue = std::stod(display);
        }
        lastOperation = op;
        newInput = true;
    }

    void calculate() {
        if (lastOperation == '\0') return;

        double inputValue = std::stod(display);

        switch (lastOperation) {
            case '+': currentValue += inputValue; break;
            case '-': currentValue -= inputValue; break;
            case '*': currentValue *= inputValue; break;
            case '/':
                if (inputValue != 0) currentValue /= inputValue;
                break;
        }

        // Formatar resultado
        if (fmod(currentValue, 1.0) == 0.0) {
            display = std::to_string(static_cast<int>(currentValue));
        } else {
            std::ostringstream oss;
            oss.precision(6);
            oss << std::fixed << currentValue;
            std::string str = oss.str();
            // Remover zeros desnecessários
            str.erase(str.find_last_not_of('0') + 1, std::string::npos);
            if (str.back() == '.') str.pop_back();
            display = str;
        }

        lastOperation = '\0';
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

    void squareRoot() {
        double value = std::stod(display);
        if (value >= 0) {
            currentValue = sqrt(value);
            display = std::to_string(currentValue);
            newInput = true;
        }
    }

    void percentage() {
        double value = std::stod(display);
        currentValue = value / 100.0;
        display = std::to_string(currentValue);
        newInput = true;
    }

    std::string getDisplay() const { return display; }
};

// ================= BOTÃO =================
struct Button {
    Rectangle rect;
    std::string label;
    Color color;
    bool hover;

    Button(float x, float y, std::string text, Color col) {
        rect = { x, y, BUTTON_SIZE, BUTTON_SIZE };
        label = text;
        color = col;
        hover = false;
    }

    void draw() {
        // Cor com efeito hover
        Color drawColor = hover ?
            Color{ (unsigned char)(color.r + 30),
                   (unsigned char)(color.g + 30),
                   (unsigned char)(color.b + 30), 255 } : color;

        // ==== CORREÇÃO AQUI ====
        // Desenhar botão (retângulo arredondado)
        DrawRectangleRounded(rect, 0.3f, 10, drawColor);
        DrawRectangleRoundedLines(rect, 0.3f, 10, 2, BLACK);
        // =======================

        // Desenhar texto centralizado
        int fontSize = 24;
        int textWidth = MeasureText(label.c_str(), fontSize);
        Vector2 textPos = {
            rect.x + (rect.width - textWidth) / 2,
            rect.y + (rect.height - fontSize) / 2
        };
        DrawText(label.c_str(), textPos.x, textPos.y, fontSize, WHITE);
    }

    bool update() {
        Vector2 mousePos = GetMousePosition();
        hover = CheckCollisionPointRec(mousePos, rect);

        return hover && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
    }
};

// ================= PROGRAMA PRINCIPAL =================
int main() {
    // Inicializar janela
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Calculadora Raylib");
    SetTargetFPS(60);

    // Criar calculadora
    Calculator calc;

    // Criar botões
    std::vector<Button> buttons;
    std::string buttonLabels[] = {
        "C", "√", "%", "/",
        "7", "8", "9", "*",
        "4", "5", "6", "-",
        "1", "2", "3", "+",
        "+/-", "0", ".", "="
    };

    // Posicionar botões (4 colunas, 5 linhas)
    float startX = BUTTON_MARGIN;
    float startY = DISPLAY_HEIGHT + BUTTON_MARGIN * 2;

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 4; col++) {
            int index = row * 4 + col;
            if (index >= 20) break;

            float x = startX + col * (BUTTON_SIZE + BUTTON_MARGIN);
            float y = startY + row * (BUTTON_SIZE + BUTTON_MARGIN);

            std::string label = buttonLabels[index];
            Color color = COLOR_BUTTON_NUMBER;

            // Definir cores por tipo
            if (label == "C") color = COLOR_BUTTON_SPECIAL;
            else if (label == "=") color = COLOR_BUTTON_EQUAL;
            else if (label == "+" || label == "-" || label == "*" || label == "/")
                color = COLOR_BUTTON_OPERATOR;
            else if (label == "√" || label == "%" || label == "+/-")
                color = (Color){ 100, 150, 100, 255 };

            buttons.push_back(Button(x, y, label, color));
        }
    }

    // Loop principal
    while (!WindowShouldClose()) {
        // Atualizar botões
        for (auto& btn : buttons) {
            if (btn.update()) {
                std::string label = btn.label;

                if (label >= "0" && label <= "9") {
                    calc.inputDigit(std::stoi(label));
                }
                else if (label == "C") {
                    calc.clear();
                }
                else if (label == "+" || label == "-" || label == "*" || label == "/") {
                    calc.performOperation(label[0]);
                }
                else if (label == "=") {
                    calc.calculate();
                }
                else if (label == ".") {
                    calc.inputDecimal();
                }
                else if (label == "+/-") {
                    calc.toggleSign();
                }
                else if (label == "√") {
                    calc.squareRoot();
                }
                else if (label == "%") {
                    calc.percentage();
                }
            }
        }

        // Começar desenho
        BeginDrawing();
        ClearBackground(COLOR_BG);

        // Desenhar display
        DrawRectangle(0, 0, WINDOW_WIDTH, DISPLAY_HEIGHT, COLOR_DISPLAY_BG);

        // Desenhar texto do display (alinhado à direita)
        std::string displayText = calc.getDisplay();
        int fontSize = 48;
        int textWidth = MeasureText(displayText.c_str(), fontSize);
        int textX = WINDOW_WIDTH - textWidth - 20;
        int textY = (DISPLAY_HEIGHT - fontSize) / 2;

        DrawText(displayText.c_str(), textX, textY, fontSize, WHITE);

        // Desenhar título
        DrawText("CALCULADORA", 20, 20, 24, LIGHTGRAY);

        // Desenhar botões
        for (auto& btn : buttons) {
            btn.draw();
        }

        // Desenhar instruções
        DrawText("Use mouse ou teclado numérico", 20, WINDOW_HEIGHT - 30, 15, GRAY);

        EndDrawing();
    }

    // Fechar janela
    CloseWindow();
    return 0;
}
