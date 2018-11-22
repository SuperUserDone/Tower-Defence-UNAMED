#ifndef TITLESCREEN_H
#define TITLESCREEN_H

#include <Screen.h>
#include <Thor/Resources.hpp>
#include "Globas.h"

class TitleScreen : public Screen
{
public:
    TitleScreen();
    //Init the screen
    virtual void init();
    //Screen loop
    virtual void loop(sf::RenderWindow* window);
    //Handle input
    virtual void handleInput(double deltatime);
    //Cleanup before exit/switch
    virtual void clean();
protected:
    //Stores the resources
    thor::ResourceHolder<sf::Texture, std::string> textureHolder;
    //Rectangle for backround
    sf::RectangleShape background;

private:
};

#endif // TITLESCREEN_H
