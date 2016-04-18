#ifndef LEVEL_H
#define LEVEL_H

#include <gamemap.h>
#include <mapobject.h>
#include <unit.h>

struct Level
{
        GameMap game_map;

        list<MapObject*> objects;
        list<Unit*> units;

        Level();
};

#endif // LEVEL_H
