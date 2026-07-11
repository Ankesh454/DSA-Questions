//Count how many times lowercase vowels occurred in a string entered by the user.
#include <iostream>
#include <string>
using namespace std;

void countLowercaseVowels(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
            count++;
        }
    }
    cout<<count<<" lowercase vowels found."<<endl;
}

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    countLowercaseVowels(str);
    return 0;
}