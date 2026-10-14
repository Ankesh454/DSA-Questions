#include <iostream>
#include <vector>
using namespace std;

int minJump(vector<int>& nums) {
        int n = nums.size();
        int far = 0;
        int jump = 0;
        int currEnd = 0;

        for(int i=0;i<n-1;i++){
            far = max(far, i+nums[i]);

            if(i == currEnd){
                jump++;
                currEnd = far;
            }
        }
        return jump;
    }

int main() {
    vector<int> nums = {2,3,1,1,4};

    cout<<"Min jumps to reach last index = "<<minJump(nums)<<endl;
    return 0;
}