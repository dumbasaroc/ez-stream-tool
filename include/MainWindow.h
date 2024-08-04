#ifndef EZSTREAM_MAIN_WINDOW
#define EZSTREAM_MAIN_WINDOW

#include <SDL.h>
#include <vector>
#include "Widget.h"

#include "TextInput.h"
#include "Character.h"

enum WindowMode {
    MAINWINDOW,
    P1SELECT,
    P2SELECT
};

class MainWindow
{
private:
    std::vector<Widget*> _widgets;
    std::vector<Widget*> _widgets2;

    static WindowMode currMode;


public:
    MainWindow();
    ~MainWindow();
    std::vector<Character> loadCharacters();
    void render(SDL_Window* renderwindow);
};




#endif