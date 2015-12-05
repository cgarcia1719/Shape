#include "Circle.h"

using namespace std;

   Circle::Circle(int xcor, int ycor, int r)
   {
        x= xcor;
        y= ycor;
        radius = r;
    }

    void Circle::setX(int xcor) {
        x = xcor;
    }
    void Circle::setY(int ycor) {
        y = ycor;
    }
    void Circle::setRadius(int r) {
        radius = r;
    }
    int Circle::getX() {
        return x;
    }
    int Circle::getY() {
        return y;
    }
    int Circle::getRadius() {
        return radius;
    }
    void Circle::draw() {
        cout << "drawing circle at: " <<
        getX() << " , " << getY() <<
        " with a radius of: " << getRadius() << endl;
    }

