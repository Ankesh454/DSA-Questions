#include <iostream>
using namespace std;

void allOccur(int arr[],int i,int n,int key){
    
    if(i==n){
        return;
    }

    if(arr[i]==key){
        cout<<i<<" ";
    }
    allOccur(arr,i+1,n,key);
}

int main() {
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    allOccur(arr,0,n,2);
    return 0;
}