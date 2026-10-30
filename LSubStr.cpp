#include <iostream>
using namespace std;

int kDistinctChars(int k, string &s){
    int maxLen = 0;
    int l=0, r=0;

    unordered_map<char, int> m;

    while(r < s.size()){
        m[s[r]]++;

        if(m.size() > k){
            m[s[l]]--;

            if(m[s[l]] == 0){
                m.erase(s[l]);
            }
            l++;
        }

        if(m.size() <= k){
            maxLen = max(maxLen, r-l+1);
        }
        r++;
    }
    return maxLen;
}

int main() {
    string s = "aabacbebebe";
    cout<<kDistinctChars(3,s)<<endl;
    return 0;
}