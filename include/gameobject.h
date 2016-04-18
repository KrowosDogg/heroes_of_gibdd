#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <position.h>

/* Предок всех игровых объектов, и стационарных, и двигающихся
  абстрактный класс */
class GameObject
{
    public:
        virtual ~GameObject() {};
        PhysicalPos get_pos() { return pos; }
        void set_pos(PhysicalPos val) { pos = val; }

    protected:
        PhysicalPos pos;
        /* нетипизированный указатель на картинку в памяти */
        void *avatar;

        GameObject() {}; // нельзя создавать экземпляр абстрактного GameObject
};

#endif // GAMEOBJECT_H
