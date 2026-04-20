#include <SFML/Graphics.hpp>
int main() {
    sf::RenderWindow window(sf::VideoMode(400, 300), "OK");
    sf::CircleShape circle(50.f);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(150.f, 100.f);
    while (window.isOpen()) {
        if (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) window.close();
        }
        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}
