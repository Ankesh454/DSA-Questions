#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    
    unordered_map<int,int> m;
    
    for(int i = 0;i<nums.size();i++){
        int remaining = target - nums[i];

        if(m.find(remaining) != m.end()){
            return {m[remaining], i};
        }

        m[nums[i]] = i;
    }
    return {};   
}

int main() {
    vector<int> nums = {2,7,11,15};
    twoSum(nums, 9);
    return 0;
}