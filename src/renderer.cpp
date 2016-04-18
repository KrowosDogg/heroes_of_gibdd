#include "renderer.h"

Renderer::Renderer(Level &_level) :level(_level)
{
    //ctor
}


void Renderer::render()
{
    //отбираем часть карты, которая требует отображения в levelwindow
    int i1 = floor(PhysicalPos(AbsolutePos(cam.x - gc_levelwindow_width/2, cam.y - gc_levelwindow_height/2)).i);
    int j1 = floor(PhysicalPos(AbsolutePos(cam.x + gc_levelwindow_width/2, cam.y - gc_levelwindow_height/2)).j);
    int i2 = ceil(PhysicalPos(AbsolutePos(cam.x + gc_levelwindow_width/2, cam.y + gc_levelwindow_height/2)).i);
    int j2 = ceil(PhysicalPos(AbsolutePos(cam.x - gc_levelwindow_width/2, cam.y + gc_levelwindow_height/2)).j);

    //в порядке приближения клеток отрисовываем клетки и объекты на них
    int i = i1, j = j1;
    while(true) //FIXME
    {
        i -= 1;
        j += 1; //FIXME

        //bmp = bmp_by_cell_type[level.game_map.cells[j][i].type]
        //AbsolutePos(PhysicalPos(i, j)) - Camera
    }
}
