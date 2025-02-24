#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
void Longbroken(sf::RectangleShape a[10][10], float ballbound);
int main()
{

    sf::RenderWindow window(sf::VideoMode(512, 512), "Janelock", sf::Style::Default);
    sf::RectangleShape LongBrick[10][10], ShortBrick[10][10];
    bool arr1[3][6] = { {1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1} }, arr2[2][4] = { {1,1,1,1},{1,1,1,1} };
    //tagroba
    sf::CircleShape ball;
    ball.setRadius(10.0);
    ball.setPosition(200, 350);

    //font file
    sf::Font font;
   if (font.loadFromFile("Font1.ttf")==false);
     {
       cout << "font not load"; 
      }
    sf::Text text;
    text.setFont(font);
    text.setString("Hello world");
    text.setPosition(500,400);
    text.setFillColor(sf::Color(255, 215, 0));
    text.setCharacterSize(36);
    text.setStyle(sf::Text::Regular);



    while (window.isOpen()) {
        sf::Event evnt;
        while (window.pollEvent(evnt)) {
            switch (evnt.type) {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
            ball.move(-10.0f, 0.0f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
ball.move(10.0f, 0.0f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
            ball.move(0.0f, -10.0f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
            ball.move(0.0f, 10.0f);
        }
       
        text.setString("HEllo world");
        
        window.clear();
        double x = 0, y = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                sf::Texture LongBricktext;
                LongBricktext.loadFromFile("green.png");
                LongBrick[i][j].setTexture(&LongBricktext);
                LongBrick[i][j].setSize(sf::Vector2f(86.0f, 25.0f));
                LongBrick[i][j].setPosition(x, y);
                if (arr1[i][j]) {
                    window.draw(LongBrick[i][j]);
                }
                x += 87.0;
            }
            x = 0;
            y += 54.0;
        }
        double x2 = 87.0, y2 = 27.0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                sf::Texture SBricktext;
                SBricktext.loadFromFile("light.png");
                ShortBrick[i][j].setTexture(&SBricktext);
                ShortBrick[i][j].setSize(sf::Vector2f(86.0f, 25.0f));
                ShortBrick[i][j].setPosition(x2, y2);
                if (arr2[i][j]) {
                    window.draw(ShortBrick[i][j]);
                }
                x2 += 87.0;
            }
            x2 = 87.0;
            y2 += 54;
        }
        window.draw(ball);
        window.draw(text);


        //collsion:
        sf::FloatRect ballbound = ball.getGlobalBounds();
        if (ballbound.intersects(LongBrick[0][0].getGlobalBounds())) {
            arr1[0][0] = false;
        }
        if (ballbound.intersects(LongBrick[0][1].getGlobalBounds())) {
            arr1[0][1] = false;
        }
        if (ballbound.intersects(LongBrick[0][2].getGlobalBounds())) {
            arr1[0][2] = false;
        }
        if (ballbound.intersects(LongBrick[0][3].getGlobalBounds())) {
            arr1[0][3] = false;
        }
        if (ballbound.intersects(LongBrick[0][4].getGlobalBounds())) {
            arr1[0][4] = false;
        }
        if (ballbound.intersects(LongBrick[0][5].getGlobalBounds())) {
            arr1[0][5] = false;
        }
        if (ballbound.intersects(LongBrick[1][0].getGlobalBounds())) {
            arr1[1][0] = false;
        }
        if (ballbound.intersects(LongBrick[1][1].getGlobalBounds())) {
            arr1[1][1] = false;
        }
        if (ballbound.intersects(LongBrick[1][2].getGlobalBounds())) {
            arr1[1][2] = false;
        }
        if (ballbound.intersects(LongBrick[1][3].getGlobalBounds())) {
            arr1[1][3] = false;
        }
        if (ballbound.intersects(LongBrick[1][4].getGlobalBounds())) {
            arr1[1][4] = false;
        }
        if (ballbound.intersects(LongBrick[1][5].getGlobalBounds())) {
            arr1[1][5] = false;
        }
        if (ballbound.intersects(LongBrick[2][0].getGlobalBounds())) {
            arr1[2][0] = false;
        }
        if (ballbound.intersects(LongBrick[2][1].getGlobalBounds())) {
            arr1[2][1] = false;
        }
        if (ballbound.intersects(LongBrick[2][2].getGlobalBounds())) {
            arr1[2][2] = false;
        }
        if (ballbound.intersects(LongBrick[2][3].getGlobalBounds())) {
            arr1[2][3] = false;
        }
        if (ballbound.intersects(LongBrick[2][4].getGlobalBounds())) {
            arr1[2][4] = false;
        }
        if (ballbound.intersects(LongBrick[2][5].getGlobalBounds())) {
            arr1[2][5] = false;
        }

        //loop2
        if (ballbound.intersects(ShortBrick[0][0].getGlobalBounds())) {
            arr2[0][0] = false;
        }
        if (ballbound.intersects(ShortBrick[0][1].getGlobalBounds())) {
            arr2[0][1] = false;
        }   
        if (ballbound.intersects(ShortBrick[0][2].getGlobalBounds())) {
            arr2[0][2] = false;
        }   
        if (ballbound.intersects(ShortBrick[0][3].getGlobalBounds())) {
            arr2[0][3] = false;
        }   
        if (ballbound.intersects(ShortBrick[1][0].getGlobalBounds())) {
            arr2[1][0] = false;
        }   
        if (ballbound.intersects(ShortBrick[1][1].getGlobalBounds())) {
            arr2[1][1] = false;
        }   
        if (ballbound.intersects(ShortBrick[1][2].getGlobalBounds())) {
            arr2[1][2] = false;
        }   
        if (ballbound.intersects(ShortBrick[1][3].getGlobalBounds())) {
            arr2[1][3] = false;
        }   
        

        //----------------------------------------
        window.display();
    }
    return 0;
}