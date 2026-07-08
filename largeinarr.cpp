//Find largest in array
#include <iostream>
using namespace std;

int main() {
    int arr[5]={6,3,7,23,5};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];

    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max = "<<max<<endl;
    return 0;
}