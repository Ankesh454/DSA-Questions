#include <iostream>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second < p2.second;
}

int maxChainLength(vector<pair<int,int >> pairs){
    int n = pairs.size();

    sort(pairs.begin(),pairs.end(),compare);

    int ans = 1;
    int currEnd = pairs[0].second;

    for(int i=1;i<n;i++){
        if(pairs[i].first > currEnd){
            ans +=1;
            currEnd = pairs[i].second;
        }
    }

    cout<<"Max chain length = "<<ans<<endl;
    return ans;
}

int main() {
    int n = 5;
    vector<pair<int,int >> pairs(n,make_pair(0,0));

    for(int i=0;i<n;i++){
        int first, second;
        cout<<"First\n";
        cin>>first;
        cout<<"Second\n";
        cin>>second;
        pairs[i] = make_pair(first,second);
    }
    maxChainLength(pairs);
    return 0;
}