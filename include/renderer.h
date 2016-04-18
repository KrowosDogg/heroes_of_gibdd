#ifndef RENDERER_H
#define RENDERER_H

#include <level.h>
#include <camera.h>

#include <SDL2/SDL.h>

const int gc_levelwindow_width = 800;
const int gc_levelwindow_height = 600;

class Renderer
{
    public:
        Renderer(Level &level);

        /* отображает карту и объекты на экране */
        void render();

        GameObject* get_selected() { return selected; }
        void set_selected(GameObject* val) { selected = val; }

    private:
        Camera cam;
        /* выбранный в данный момент объект, параметры которого отображаются в окне справа*/
        GameObject *selected;
        Level &level;
};

#endif // RENDERER_H
