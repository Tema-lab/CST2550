#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {};
    int grade = 0;
    while(grade != -1){
        std::cout << "Enter grade(or -1 to end) " << std::endl;
        std::cin >> grade;
        if(grade != -1){
            nums.push_back(grade);
        }
    }
    if(grade == -1){
        int meanAvg;
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
        }
        meanAvg = sum / nums.size();
        std::cout << "Average: " << meanAvg;
    }
    return 0;
}
