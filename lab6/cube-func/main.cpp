#include <iostream>

int main() {
    double cubeFunc(double);
    double num,cube;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> num;
    cube = cubeFunc(num);
    std::cout <<"The cube of number " << num << " is " << cube << std::endl;
    return 0;
}

double cubeFunc(double a){
    double num;
    num = a * a * a;
    return num;
}
