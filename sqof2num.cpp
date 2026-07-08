//Write a function which takes 2 numbers as parameters (a&b) and outputs:a^2+b^2+2*ab.
#include <iostream>
using namespace std;

int mul(int a,int b){
    return (a+b)*(a+b);
}

int main() {
    int a;
    cout<<"Enter a :";
    cin>>a;
    int b;
    cout<<"Enter b :";
    cin>>b;
    cout<<"(a+b)^2 :="<<mul(a,b)<<endl;
    return 0;
}