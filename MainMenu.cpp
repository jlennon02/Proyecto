#include "MainMenu.h"

MainMenu::MainMenu(int num)
{
    if (!font.loadFromFile("Fonts/Valorant Font.ttf")) {
        cout << "No fonts is here";
    }

    // Play
    mainMenu[0].setFont(font);
    mainMenu[0].setFillColor(Color::Blue);
    mainMenu[0].setString("Play");
    mainMenu[0].setCharacterSize(70);
    mainMenu[0].setPosition(100, 100);
    // Options
    mainMenu[1].setFont(font);
    mainMenu[1].setFillColor(Color::White);
    mainMenu[1].setString("Options");
    mainMenu[1].setCharacterSize(70);
    mainMenu[1].setPosition(100, 200);
    // About
    mainMenu[2].setFont(font);
    mainMenu[2].setFillColor(Color::White);
    mainMenu[2].setString("About");
    mainMenu[2].setCharacterSize(70);
    mainMenu[2].setPosition(100, 300);
    // Map
    mainMenu[3].setFont(font);
    mainMenu[3].setFillColor(Color::White);
    mainMenu[3].setString("Map");
    mainMenu[3].setCharacterSize(70);
    mainMenu[3].setPosition(100, 400);
    // Exit
    mainMenu[4].setFont(font);
    mainMenu[4].setFillColor(Color::White);
    mainMenu[4].setString("Exit");
    mainMenu[4].setCharacterSize(70);
    mainMenu[4].setPosition(100, 500);

    MainMenuSelected = 0;
}
MainMenu::~MainMenu()
{

}
// Draw MainMenu
void MainMenu::draw(RenderWindow& window) {

    for (int i = 0; i < Max_main_menu; ++i) {
        window.draw(mainMenu[i]);
    }
}

// MoveDown
void MainMenu::MoveDown() {
    if (MainMenuSelected + 1 <= Max_main_menu)
    {
        mainMenu[MainMenuSelected].setFillColor(Color::White);
        MainMenuSelected++;
        if (MainMenuSelected == 5) {
            MainMenuSelected = 0;
        }
        mainMenu[MainMenuSelected].setFillColor(Color::Blue);
    }
}

// MoveUp
void MainMenu::MoveUp() {
    if (MainMenuSelected + 1 >= 1) 
    {
        mainMenu[MainMenuSelected].setFillColor(Color::White);
        MainMenuSelected--;
        if (MainMenuSelected == -1) {
            MainMenuSelected = 4;
        }
        mainMenu[MainMenuSelected].setFillColor(Color::Blue);
    }
}