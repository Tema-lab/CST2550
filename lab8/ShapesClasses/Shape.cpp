#include "Shape.h"

Shape::Shape(std::string name)
{
    this->name = name;
}

Shape::~Shape()
{
}

std::string Shape::description()
{
    return name + " has area: " + std::to_string(area());
}

Square::Square(double width) : Shape("Square")
{
    this->width = width;
}

double Square::area()
{
    return width * width;
}
Circle::Circle(double radius) : Shape("Circle"){
    this->radius = radius;
}
double Circle::area() {
    return 3.14 * radius * radius;
}

Rectangle::Rectangle(double width, double height) : Shape("Rectangle"){
    this->width = width;
    this->height = height;
}
double Rectangle::area() {
    return width * height;
}