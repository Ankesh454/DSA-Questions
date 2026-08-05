#include <iostream>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int left = 0;
    int right = height.size()-1;

    while(left < right){
        int width = right-left;
        int ht = min(height[left],height[right]);
        int currWater = width * ht;
        maxWater = max(maxWater,currWater);

        height[left] < height[right] ? left++ : right--;
    }
    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int result = maxArea(height);
    cout<<"The maximum area of water that can be contained is: "<<result<<endl;
    return 0;
}