#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1200, 800), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

//	sf::CircleShape shape(50.f);
    sf::CircleShape triangle(80, 3);

// set the shape color to green
triangle.setFillColor(sf::Color(200, 250, 50));

//    window.draw(triangle);
//    // end the current frame
//    window.display();
        
sf::Vector2f pos = triangle.getPosition();
    int offsetX = 100, offsetY = 500;
    triangle.setPosition(pos.x + offsetX, pos.y + offsetY);
            
    window.draw(triangle);
    // end the current frame
    window.display();
    }
    

    return 0;
}
