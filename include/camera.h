#ifndef CAMERA_H
#define CAMERA_H

#include <position.h>


class Camera : public AbsolutePos
{
    public:
        Camera(int x = 0, int y = 0) :AbsolutePos(x, y)
        {}
};

struct ScreenPos
{
    int x;
    int y;

    ScreenPos(int _x = 0, int _y = 0): x(_x), y(_y)
    {}
    ScreenPos(AbsolutePos pos, const Camera &camera)
    {
        x = pos.x - camera.x;
        y = pos.y - camera.y;
    }
};



#endif // CAMERA_H
