#ifndef MANAGER_H
#define MANAGER_H
#include <SFML/Graphics.hpp>

#include "TitleScreen.h"
#include "GameScreen.h"

#include "Globas.h"

class Manager
{
public:
    //Constructor
    Manager();
    //Inits the application
    void init();
    //Loads basic resources(splash etc)
    void loadBasic();
    //Loads Advanced resources(Level)
    void load();
    //Starts the main Loop
    void loop();
    //Cleans the application after exiting
    void clean();
    //Force quits the application if something goes wrong
    void crash();


protected:
    //Create the main window
    sf::RenderWindow window;
    //Create a pointer to point to active screen
    Screen* activeScreen;
    //Set the current screen
    ScreensType currentActive = ScreensType::Title;
    //Create the MainMenu/Title screen
    TitleScreen titleScreen;
    //Create the main game screen
    GameScreen gameScreen;
    //Create timer for delta time
    sf::Clock timer;
    //Delta time
    double deltatime = 0.f;
private:
};

#endif // MANAGER_H
