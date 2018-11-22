#include <iostream>
#include <SFML/Graphics.hpp>

#include "Globas.h"
#include "Manager.h"

ScreensType cScreen;

int main()
{
    //Create manager instance
    Manager mana;
    //Init the manager
    mana.init();
    //Start the manager loop
    mana.loop();

    //Exit the application
    return 0;
}
