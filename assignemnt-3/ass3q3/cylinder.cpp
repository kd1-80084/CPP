#include "./cylinder.h"

Cylinder::Cylinder()
{
    this->radius = 1;
    this->height = 1;
}

Cylinder::Cylinder(double radius, double height)
{
    this->radius = radius;
    this->height = height;
}

double Cylinder::getRadius()
{
    return this->radius;
}

double Cylinder::getHeight()
{
    return this->height;
}

void Cylinder::setHeight(double height)
{
    this->height = height;
}

void Cylinder::setRadius(double radius)
{
    this->radius = radius;
}

double Cylinder::getVolumn()
{
    return 3.14 * this->radius * this->radius * this->height;
}

void Cylinder::ptintVolume()
{
    cout << "volume=" << getVolumn() << endl;
}
