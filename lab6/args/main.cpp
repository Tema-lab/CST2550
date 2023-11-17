#include <string>
#include <iostream>

void printArgs();

int main() {
    printArgs()
    return 0;
}


void printArgs(std::string &name, int numOfElements[], int listOfLineArgs[]){
    int sum = 0;
    for(int i = 0; i < sizeof(numOfElements);i++){
        sum += numOfElements[i];
    }
    std::cout << sum << std::endl;

    for(int i = 0; i <sizeof(listOfLineArgs);i++){
        std::cout << listOfLineArgs[i] << std::endl;
    }
}