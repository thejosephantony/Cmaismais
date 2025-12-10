// teste_raylib.cpp - Código MÍNIMO que FUNCIONA
#include "raylib.h"

int main() {
    // 1. Inicializar janela
    InitWindow(800, 600, "Minha Primeira Janela Raylib");
    
    // 2. Definir FPS
    SetTargetFPS(60);
    
    // 3. Loop principal
    while (!WindowShouldClose()) {  // Fecha com ESC ou X
        // Começar desenho
        BeginDrawing();
        
        // Limpar tela com cor
        ClearBackground(RAYWHITE);
        
        // Desenhar texto
        DrawText("Raylib FUNCIONANDO!", 190, 200, 40, DARKGRAY);
        
        // Desenhar círculo
        DrawCircle(400, 300, 50, RED);
        
        // Desenhar retângulo
        DrawRectangle(300, 400, 200, 100, BLUE);
        
        // Finalizar desenho
        EndDrawing();
    }
    
    // 4. Fechar janela
    CloseWindow();
    
    return 0;
}