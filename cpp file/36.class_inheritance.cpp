#include <iostream>

const double Pi = 3.14;

class Shape
{
public:
    double area;
    double volume;
};
class Cube : public Shape
{

public:
    double side;

    Cube(double side)
    {
        this->side = side;
        this->area = 6 * side * side;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape
{
public:
    double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * Pi * (radius * radius);
        this->volume = (4 / 3.0) * Pi * (radius * radius * radius);
    }
};

int main()
{
    Cube cube(10);
    Sphere sphere(5);

    std::cout << "CUBE Area: " << cube.area << "cm \n";
    std::cout << "CUBEVolume: " << cube.volume << "cm \n";
    std::cout << "Sphere Area: " << sphere.area << "cm \n";
    std::cout << "Sphere Volume: " << sphere.volume << "cm \n";

    return 0;
}