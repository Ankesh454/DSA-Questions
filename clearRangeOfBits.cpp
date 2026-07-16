#include <iostream>
using namespace std;

int clearBitsOfRange(int num,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;

    int mask=a|b;
    num=num&mask;

    cout<<num<<endl;
    return num;
}

int main() {
    clearBitsOfRange(31,1,3);
    return 0;
}