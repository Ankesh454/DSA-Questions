#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int firstIdx = - 1, secondIdx = - 1;

    while(low<=high){
        int mid = (low+high)/2;

        if(nums[mid] == target){
            firstIdx = mid;
            high = mid-1;
        }
        else if(nums[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    low = 0;
    high = nums.size() - 1;

    while(low<=high){
        int mid = (low+high)/2;

        if(nums[mid] == target){
            secondIdx = mid;
            low = mid+1;
        }else if(nums[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return {firstIdx,secondIdx};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    searchRange(nums,target);
    return 0;
}