#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int largestZeroSumSubArr(vector<int> arr){
    unordered_map<int, int> m;
    int sum = 0;
    int ans = 0;

    for(int j = 0; j < arr.size(); j++){
        sum += arr[j];

        if(sum == 0){
            ans = j + 1;
        }
        if(m.count(sum)){
            int currLen = j - m[sum];
            ans = max(ans, currLen);
        } 
        else{
            m[sum] = j;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15, -2, 3, -8, 1, 7, 10};
    cout<<largestZeroSumSubArr(arr)<<endl;

    return 0;
}