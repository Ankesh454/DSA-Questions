#include <iostream>
using namespace std;

int firstUniqChar(string s) {
    queue<char> q;
    int freq[26] = {0};

    for(int i=0;i<s.size();i++){
        char ch = s[i];
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front() - 'a'] > 1){
            q.pop();
        }
    }
    if(q.empty()) {
        return -1;
    }

    char ans = q.front();

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ans) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s="leetcode";

    cout<<firstUniqChar(s)<<endl;
    return 0;
}