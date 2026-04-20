#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "=== TESTE SFML 3.0 ===" << std::endl;
    
    // 1. Testar criação de janela
    sf::RenderWindow window(sf::VideoMode({800u, 600u}), "Teste SFML 3.0");
    
    if (!window.isOpen()) {
        std::cout << "ERRO: Não consegui criar janela!" << std::endl;
        return 1;
    }
    std::cout << "✓ Janela criada" << std::endl;
    
    // 2. Testar fonte
    sf::Font font;
    if (!font.openFromFile("C:/Windows/Fonts/arial.ttf")) {
        std::cout << "AVISO: Não consegui carregar fonte, continuando..." << std::endl;
    } else {
        std::cout << "✓ Fonte carregada" << std::endl;
    }
    
    // 3. Testar formas básicas
    sf::CircleShape circle(50.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({350.f, 250.f});
    std::cout << "✓ Forma criada" << std::endl;
    
    // 4. Loop principal simplificado
    std::cout << "Entrando no loop principal..." << std::endl;
    
    while (window.isOpen()) {
        // Processar eventos de forma simples
        if (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
                std::cout << "✓ Evento de fechar capturado" << std::endl;
            }
        }
        
        // Renderizar
        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
    
    std::cout << "=== TESTE CONCLUÍDO ===" << std::endl;
    return 0;
}