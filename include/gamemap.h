#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <vector>
#include <gameobject.h>
#include <list>

using std::list;
using std::vector;

enum CellType{
    ground = 0,
    road_E = 1,
    road_S = 2,
    cross_X = 3,
    cross_T_E = 4,
    cross_T_S = 5,
    cross_T_W = 6,
    cross_T_N = 7,
    bend_SW = 8,
    bend_NW = 9,
    bend_NE = 10,
    bend_SE = 11
};

class Cell;

class GameMap
{
    public:
        GameMap();
        ~GameMap();
        int Getmap_size() { return map_size; }
    protected:
    private:
        int map_size;
        vector<vector<Cell>> cells;
};

struct Cell{

    CellType type;
    list <GameObject*> objects;

};

#endif // GAMEMAP_H
