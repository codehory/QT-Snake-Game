/*************************************************
* file   : cube.h
* author : ho
* date   : 2023/7/3
**************************************************/


#pragma once


class Cube {
public:
    Cube();
    Cube(int x, int y) : x_(x), y_(y) {}
    virtual ~Cube() {}
    virtual void draw();

protected:
    int x_;
    int y_;

};

