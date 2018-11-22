#include "Manager.h"

Manager::Manager()
{
    //ctor
}
//Inits the application
void Manager::init()
{
    //Creates the window
    window.create(sf::VideoMode(800, 600), "Test", sf::Style::Default);
    //Stets the active screen to be the title screen
    activeScreen = &titleScreen;
    //Inits the title screen
    activeScreen->init();
    //Loads basic resources
    loadBasic();
}
//Loads basic resources(splash etc)
void Manager::loadBasic()
{

}
//Loads Advanced resources(Level)
void Manager::load()
{
}
//Starts the main Loop
void Manager::loop()
{
    timer.restart();

    //Run forver untill window closes
    while(window.isOpen())
    {
        //Calculate delta time
        deltatime = timer.restart().asSeconds();
        //Check if the current active screen matches with global screen
        if(cScreen != currentActive)
        {
            //switch screen
            if(cScreen == ScreensType::Game)
            {
                activeScreen->clean();
                activeScreen = &gameScreen;
                activeScreen->init();
            }
            currentActive = cScreen;
        }
        //Define even handler
        sf::Event e;
        //Goes through event lists
        while(window.pollEvent(e))
        {
            //Checks if the exit button was clicked and runs cleanup function
            if(e.type == sf::Event::Closed)
                clean();
        }
        //Clear the window before drawing
        window.clear();

        //Handle input for current screen
        activeScreen->handleInput(deltatime);

        //Run the currents screens q
        activeScreen->loop(&window);

        //Displays the window after drawing;
        window.display();
    }
    //Runs cleanup if force closed
    clean();
}
//Cleans the application after exiting
void Manager::clean()
{
    //Closes the window
    window.close();
}
//Force quits the application if something goes wrong
void Manager::crash()
{

}
