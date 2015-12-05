class Shape {
public:
    virtual void setX(int xcor) = 0;
    virtual void setY(int ycor) = 0;
    virtual int getX() = 0;
    virtual int getY() = 0;
    virtual void draw() = 0;
};

