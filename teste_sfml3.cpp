#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "=== TESTE SFML 3.0 ===" << std::endl;
    
    // Criar janela de forma SIMPLES
    sf::RenderWindow window(sf::VideoMode(800, 600), "Teste SFML 3.0");
    
    if (!window.isOpen()) {
        std::cout << "ERRO: Não consegui criar janela!" << std::endl;
        return 1;
    }
    std::cout << "✓ Janela criada" << std::endl;
    
    // Círculo simples
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(300.f, 200.f);
    std::cout << "✓ Forma criada" << std::endl;
    
    std::cout << "Entrando no loop principal..." << std::endl;
    std::cout << "Pressione ESC ou feche a janela para sair" << std::endl;
    
    // Loop principal MUITO SIMPLES
    while (window.isOpen()) {
        // Verificar se quer fechar
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
            window.close();
        }
        
        // Processar eventos básicos
        if (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
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
