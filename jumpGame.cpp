#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
        int n = nums.size();
        int far = 0;
        
        if(n == 1){
            return true;
        }
        for(int i=0;i<n-1;i++){
            if (i > far) {
                return false;
            }
            far = max(far, i+nums[i]);

            if(far >= n-1){
                return true;
            }
        }
        return false;
    }

int main() {
    vector<int> nums = {2,3,1,1,4};

    cout<<(canJump(nums) ? "Yes" : "No")<<endl;
    return 0;
}