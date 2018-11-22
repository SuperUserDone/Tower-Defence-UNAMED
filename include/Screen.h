#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <SFML/Graphics.hpp>

class Screen
{
public:
    Screen();

    //Init the screen
    virtual void init();
    //Screen loop
    virtual void loop(sf::RenderWindow* window);
    //Handle input
    virtual void handleInput(double deltatime);
    //Cleanup before exit/switch
    virtual void clean();

protected:

private:
};

#endif // SCREEN_H
