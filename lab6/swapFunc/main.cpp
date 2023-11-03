#include <iostream>
#include <array>
void print_array(int arr[], int sizeOfArray);
void swap(int arr[], int pos1, int pos2);

int main() {
    int sizeOfArray = 3;
    int arr[] = {1,2,3};
    std::cout << "Original Array: " << std::endl;
    print_array(arr, 3);
    std::cout << "\nArray after swapping" << std::endl;
    swap(arr,0,1);
    return 0;
}

void swap(int arr[], int pos1,int pos2){
    int tmp;
    tmp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = tmp;
    std::cout << "[";
    for(int i = 0; i < 3;i++){
       std::cout << arr[i];
        if(i < 2){
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

void print_array(int arr[],int sizeOfArr){
    std::cout << "[";
    for(int i = 0; i < sizeOfArr; i++) {
        std::cout<<arr[i];
        if(i < 2){
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

