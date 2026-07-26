#include <iostream>
using namespace std;

int binSearch(int arr[],int start,int end,int key){
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;

    if(arr[mid]==key){
        return mid;
    }
    if(key<arr[mid]){
        return binSearch(arr,start,mid - 1,key);
    }else{
        return binSearch(arr,mid+1,end,key);
    }
}

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    cout<<binSearch(arr,0,n-1,5)<<endl;
    return 0;
}