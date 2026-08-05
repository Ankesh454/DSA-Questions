#include <iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum += nums[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(nums);
    cout<<"The maximum sum of a contiguous subarray is: "<<result<<endl;
    return 0;
}