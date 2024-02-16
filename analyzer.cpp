#include <iostream>
#include <array>

int binarySearch(std::vector<int> nums, int target);
int linearSearch(std::vector<int> nums, int target);

int main(){
    std::vector<int> list{0,1,2,3,4,5,6,7,8,9};
    std::cout << binarySearch(list, 4) << std::endl;
    std::cout << linearSearch(list, 4) << std::endl;
    return 0;
}

int binarySearch(std::vector<int> nums, int target){
    int minIndex = 0;
    int maxIndex = size(nums);
    int midIndex = (minIndex + maxIndex)/2;
    while (minIndex <= maxIndex){
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

int linearSearch(std::vector<int> nums, int target){
    for(int index = 0; index < size(nums)-1; index++){
        if (nums[index] == target) {
            return index;
        }
    }
    return -1;
}