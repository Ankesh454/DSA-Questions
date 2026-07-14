#include <iostream>
#include <vector>
using namespace std;

vector<int> mismatch(vector<int> nums){
    int n=nums.size();

    vector<int> freq(n+1,0);

    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }

    int duplicate,missing;
    for(int i=1;i<=n;i++){
        if(freq[i]==2){
            duplicate=i;
        }
        if(freq[i]==0){
            missing =i;
        }
    }
    return {duplicate,missing};
}

int main() {
    vector<int> vec={1,2,3,2};

    vector<int> ans=mismatch(vec);
    
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<< " ";
    }
    cout<<endl;
    return 0;
}