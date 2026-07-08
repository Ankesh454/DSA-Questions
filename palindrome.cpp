//Write a function to check if a number is a palindrome in C++ .(121 is a palindrome, 321 is not) 
#include<iostream>
using namespace std;

int revnumber(int n){
    int rev = 0;

    while(n>0){
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n/10;
        
    }
    return rev;
    
    
}

void ispalindrome(){
    int n;
    while(true){
        cout<<"enter number :";
        cin>>n;
        if(!cin){
            break;
        }
    
        int rev=revnumber(n);
        if (n==rev){
            cout<<"Palindrome"<<endl;
        }
        else{
            cout<<"not a palindrom"<<endl;
        }
    }
}
int main() {
    ispalindrome();
    return 0;
}