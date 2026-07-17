#include <iostream>
using namespace std;

int findSingle(int nums[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans^=nums[i];
    }
    return ans;
}

int main() {
    int arr[5]={2,4,5,2,4};
    
    cout<<findSingle(arr,5)<<endl;
    return 0;
}