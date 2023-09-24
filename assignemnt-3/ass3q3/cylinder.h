#ifndef Cylinder_h
#define Cylinder_h
#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

public:
    Cylinder();
    Cylinder(double radius, double height);
    double getRadius();
    double getHeight();
    void setHeight(double height);
    void setRadius(double radius);
    double getVolumn();
    void ptintVolume();
};
#endif