//
// Created by xvm136 on 11/24/2015.
//
#include <iostream>
#include "Shape.h"

class Circle : public Shape {

    public:
        int x, y, radius;
        Circle (int xcor, int ycor, int r);

        void setX(int xcor);
        void setY(int ycor);
        void setRadius(int r);
        int getRadius();
        int getX();
        int getY();
        void draw();
};

