#include <iostream>
#include <vector>
#include <cmath>
int main() {
    int inputNum;
    std::vector<int> primeNums = {};
    std::cout<< "Enter an integer" << std::endl;
    std::cin >> inputNum;
    for(int i = 2; i <= inputNum / 2; i++){
        if(inputNum % i == 0){
            return false;
        }
        primeNums.push_back(i);
    }
    for(const auto& el : primeNums ){
        std::cout << el << std::endl;
    }
    return 0;
}
