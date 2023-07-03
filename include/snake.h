/*************************************************
* file   : snake.h
* author : ho
* date   : 2023/7/3
**************************************************/


#ifndef QT_SNAKE_GAME_SNAKE_H
#define QT_SNAKE_GAME_SNAKE_H

#include "cube.h"
#include <vector>

class Snake : public Cube {
public:
    Snake(int x, int y) : Cube(x, y) {}

    void draw() override;


private:
    std::vector<Cube> body_;


};


#endif //QT_SNAKE_GAME_SNAKE_H
