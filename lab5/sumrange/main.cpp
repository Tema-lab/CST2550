#include <iostream>
#include <vector>

int main() {
    //variables a and b are the lover and higher boundaries
    int a,b;
    int sum = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    for(int i = a; i <= b; ++i){
        sum += i;
    }
    std::cout << "Sum from " << a << " to " << b << " is: " << sum << std::endl;
    return 0;
}
