#ifndef UNIT_H
#define UNIT_H

#include <gameobject.h>


class Unit : public GameObject
{
    public:
        Unit();
        virtual ~Unit() = 0;

        /* эта функция вызывается периодически, чтобы дать объекту менять своё состояние и положение*/
        virtual void cycle() = 0;
};

#endif // UNIT_H
