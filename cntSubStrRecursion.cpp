#include <iostream>
using namespace std;

int countSubString(string s,int i){
    if(i==s.length()){
        return 0;
    }

    int count=0;

    for(int j=i;j<s.length();j++){
        if(s[i]==s[j]){
            count++;
        }
    }
    return count + countSubString(s,i+1);
}

int main() {
    string s="aba";
    cout<<countSubString(s,0)<<endl;
    return 0;
}