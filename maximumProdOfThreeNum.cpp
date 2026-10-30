#include <iostream>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    int n = nums.size();

    int LargestNumProd1 = nums[n-1] * nums[n-2] * nums[n-3];

    int LargestNumProd2 = nums[0] * nums[1] * nums[n-1];

    return max(LargestNumProd1,LargestNumProd2);
}

int main() {
    vector<int> nums = {-4, -8, -7, 2, 5};

    cout<<maximumProduct(nums)<<endl;
    return 0;
}