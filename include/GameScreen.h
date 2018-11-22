#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <Screen.h>


class GameScreen : public Screen
{
public:
    GameScreen();
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

#endif // GAMESCREEN_H
