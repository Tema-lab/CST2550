#include <iostream>
#include "Shape.h"
#include <vector>

int main() {
    //creating vector that holds pointers to shape class
    std::vector<Shape*> shapes_vec;

    shapes_vec.push_back(new Square(20.6));
    shapes_vec.push_back(new Circle(4.5));
    shapes_vec.push_back(new Rectangle(89.8,4.8));

    std::cout << "Vector: ";

    for(Shape *el : shapes_vec){
        std::cout << el->description() << " ";
    }

    return 0;
}
