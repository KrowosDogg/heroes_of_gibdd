#ifndef POSITION_H
#define POSITION_H

const int gc_tile_width = 60;
const int gc_tile_height = 40;

struct PhysicalPos; //предобъявление класса

struct AbsolutePos
{
        int x;
        int y;

        AbsolutePos(int _x = 0, int _y = 0)
        {
            x = _x; y = _y;
        }
        AbsolutePos(const PhysicalPos &pos);
};


/* физические координаты на сетке карты*/
struct PhysicalPos
{
        double i;
        double j;

        PhysicalPos(int _i = 0, int _j = 0)
        {
            i = _i; j = _j;
        }
        PhysicalPos(const AbsolutePos &pos);
};

#endif // POSITION_H
