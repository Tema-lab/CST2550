#include <iostream>
#include <vector>
std::vector<int> selection_sort(std::vector<int> arr){
    int x;
    for(int j = 0; j < arr.size() - 1; j++){
        x = j;
        for(int i = j + 1; i < arr.size(); i++){
            if(arr[i] < arr[x]){
                x = i;
            }
        }
        if(x != j){
            //swapping elements
            int tmp = arr[j];
            arr[j] = arr[x];
            arr[x] = tmp;
        }
    }
    return arr;
}

int main() {
    char letter = ',';
    std::vector<int> unsorted_arr = {21,98,2,12,67};
    std::cout << "Unsorted array: " << std::endl;
    for(int i = 0; i < unsorted_arr.size(); i++){
        std::cout << unsorted_arr[i];
        if(i < unsorted_arr.size() - 1){
            std::cout << letter;
        }else{
            std:: cout << ". ";
        }
    }

    std::vector<int> sorted = selection_sort(unsorted_arr);

    std::cout << "\nSorted array: " << std::endl;
    for(int i = 0; i < sorted.size(); i++){
        std::cout << sorted[i];
        if(i < sorted.size() - 1){
            std::cout << letter;
        }else{
            std:: cout << ". ";
        }
    }
    return 0;
}
