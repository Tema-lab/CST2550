#include <iostream>
void print__array(int arr[], int sizeOfArr);
int main() {
    int numbers[] = {1,2,3};
    std::cout << "Printing array: " << std::endl;
    print__array(numbers, 3);
    return 0;
}

void print__array(int arr[],int sizeOfArr){
    if(sizeOfArr < 0){
        std::cout << "The size of array is less than 0" << std::endl;
    }else{
        std::cout << "[";
        for(int i = 0; i < sizeOfArr; i++) {
            std::cout<<arr[i];
            if(i < 2){
                std::cout << ", ";
            }
        }
        std::cout << "]";
    }
}
