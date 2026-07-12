#include <iostream>
using namespace std;

bool closeStrings(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    int freq1[26]={0};
    int freq2[26]={0};

    for(char ch:str1){
        freq1[ch-'a']++;
    }
    for(char ch:str2){
        freq2[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    for (int i = 0; i < 26; i++){
        if ((freq1[i] == 0 && freq2[i] != 0) ||
            (freq1[i] != 0 && freq2[i] == 0))
            return false;
    }
    sort(freq1,freq1+26);
    sort(freq2,freq2+26);

    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}



int main() {
    string str1="aacabb";
    string str2="aababc";

    int result=closeStrings(str1,str2);
    cout<<result<<endl;
    return 0;
}