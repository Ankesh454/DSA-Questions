#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;


int subArraySum(vector<int> arr,int k){
    unordered_map<int, int> m;
    int sum = 0;
    int ans = 0;

    for(int j = 0;j<arr.size();j++){
        sum += arr[j];
        if(m.count(sum)==k){
            int currLen = j - m[sum];
            ans = max(ans, currLen);
        }else{
            m[sum] = j;
        }
    }
}


int main() {
    vector<int>
    return 0;
}