// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include <iostream>
using namespace std;

void moveZeroes(int *arr, int n){
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            index++;
            swap(arr[index],arr[i]);
        }
    }
    cout<<"After moving zeroes to the end of the array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
}

int main() {
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(int);
    
    moveZeroes(arr,n);
    return 0;
}