#include <iostream>
using namespace std;

int xorBeauty(vector<int>& nums) {
    int ans=nums[0];
    for(int i = 1; i < nums.size(); i++){
        ans^=nums[i];
    }
    return ans;
}

int main() {
    vector<int> arr={15,45,20,2,34,35,5,44,32,30};
    int ans=xorBeauty(arr);
    cout<<ans<<endl;
    return 0;
}