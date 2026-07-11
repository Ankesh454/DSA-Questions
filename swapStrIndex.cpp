#include <iostream>
#include <string>
using namespace std;

bool swapStrIndex(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    swap(str1[0],str1[str1.length()-1]);
    if(str1==str2){
        cout<<"both strings are equal after swapping the first and last characters."<<endl;
        return true;
    }
    else{
        cout<<"strings are not equal after swapping the first and last characters."<<endl;
        return false;
    }
    return false;
}

int main() {
    string str1="bank";
    string str2="kana";

    swapStrIndex(str1,str2);

    return 0;
}