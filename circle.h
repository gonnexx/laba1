#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
    const double PI = 3.14159265358979323846;
    
public:
    Circle(double r);
    double getCircumference();
    double getArea();
    double getSectorArea(double angle);
    void display();
};

void circleMenu();

#endif
