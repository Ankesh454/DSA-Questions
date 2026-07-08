#include <iostream>
using namespace std;

int main() {
    int num=10829;
    int sum1= 0;
    int sum2= 0;
    while(num > 0) {
        int lastDigit = num % 10;
        cout<<"Last digit:"<<lastDigit<<endl;
        sum1 += lastDigit;
        num /= 10;
        
    }
    cout << "Sum of digits is: " << sum1 << endl;

    int num2=10829;
    while(num2 > 0) {
        int lastDigit = num2 % 10;
        if(lastDigit % 2 != 0) {
            cout<<"odd digit:"<<lastDigit<<endl;
            sum2 += lastDigit;
        }
        num2 /= 10;

    }
    cout << "Sum of odd digits is: " << sum2 << endl;

    int num3=12345;
    int res=0;
    while(num3 > 0) {
        int lastDigit = num3 % 10;
        res = res*10+ lastDigit;
        num3 /= 10;
    }
    cout << "Reversed number is: " << res << endl;

    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i <= 5);

    int j;
    do{
        cout<<"enter number:"<<endl;
        cin>>j;
        if(j%10==0){
            break;
        }
    }
    while(true);
    return 0;
}