#include "position.h"
#include <cmath>
using std::round;

AbsolutePos::AbsolutePos(const PhysicalPos &pos)
{
    x = round((pos.i - pos.j)*gc_tile_width/2.0);
    y = round((pos.i + pos.j)*gc_tile_height/2.0);
}

PhysicalPos::PhysicalPos(const AbsolutePos &pos)
{
    i = pos.x/gc_tile_width + pos.y/gc_tile_height;
    j = pos.y/gc_tile_height - pos.x/gc_tile_width;
}
