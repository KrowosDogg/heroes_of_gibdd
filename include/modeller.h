#ifndef MODELLER_H
#define MODELLER_H

#include <level.h>


class Modeller
{
    public:
        Modeller(Level &_level);
        ~Modeller();

        void cycle ();

    private:
        Level &level;
};

#endif // MODELLER_H
