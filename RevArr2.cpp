//Reverse An Array without extra space(2 pointer approach)
#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main() {
    int arr[]={4,5,3,7,3,9};
    int n=sizeof(arr)/sizeof(int);

    int  start=0,end=n-1;

    while(start<end){
        //swap
        //swap(arr[start],arr[end]);
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}
