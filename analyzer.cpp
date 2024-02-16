//
// Created by Patrick Byrd on 2/16/24.
//
#include <iostream>
#include <array>

int binarySearch(std::vector<int> nums, int target);

int main(){
    std::vector<int> list{0,1,2,3,4,5,6,7,8,9};
    std::cout << binarySearch(list, 4);
    return 0;
}

int binarySearch(std::vector<int> nums, int target){
    int minIndex = 0;
    int maxIndex = size(nums);
    int midIndex = (minIndex + maxIndex)/2;
    while (minIndex < maxIndex){
        if (nums[midIndex] < target){
            minIndex = midIndex + 1;
            midIndex = (minIndex + maxIndex)/2;
        } else if (nums[midIndex] > target){
            maxIndex = midIndex - 1;
            midIndex = (minIndex + maxIndex)/2;
        } else if (nums[midIndex] == target)
            return midIndex;
    }
    return -1;
}