//Write a function that prints the largest of 3 numbers.
#include <iostream>
using namespace std;

int largeNum(int a,int b,int c){
    if(a>b&&a>c){
        cout<<"a is largest no"<<endl;
        return a;
    }
    else if(b>a&&b>c){
        cout<<"b is largest no"<<endl;
        return b;
    }
    else{
        cout<<"c is largest no"<<endl;
        return c;
    }
}

int main() {
    largeNum(3,2,6);
    return 0;
}