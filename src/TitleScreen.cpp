#include "TitleScreen.h"

TitleScreen::TitleScreen()
{

}

//Init the screen
void TitleScreen::init()
{
    //Fills texture holder with basic textures
    textureHolder.acquire("TitleBackground", thor::Resources::fromFile<sf::Texture>("Data/Assets/Backgrounds/Title.png"));
    //set backround's texture
    background.setTexture(&textureHolder["TitleBackground"]);
    //Makes sure the position is at 0,0
    background.setPosition(0, 0);

}

//Screen loop
void TitleScreen::loop(sf::RenderWindow* window)
{
    //Makes sure the view is correct
    window->setView(window->getDefaultView());
    //Sets backround size to window size
    background.setSize(sf::Vector2f(800, 600));
    //Draws backround
    window->draw(background);
}
//Handle input
void TitleScreen::handleInput(double deltatime)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        cScreen = ScreensType::Game;
}
//Cleanup before exit/switch
void TitleScreen::clean()
{

}
