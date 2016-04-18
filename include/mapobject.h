#ifndef MAPOBJECT_H
#define MAPOBJECT_H

#include <gameobject.h>


class MapObject : public GameObject
{
    public:
        MapObject();
        virtual ~MapObject();

        /* эта функция вызывается периодически, чтобы дать объекту менять своё состояние */
        virtual void cycle() = 0;
};

#endif // MAPOBJECT_H
