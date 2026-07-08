#include <iostream>
using namespace std;

int rotatedArrBSearch(int *arr,int n,int target){
    int st=0,end=n-1;

    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[st]<=arr[mid]){
            if(target>=arr[st]&&target<arr[mid]){
                end =mid-1;
            }
            else{
                st = mid+1;
            }
        }
        if(arr[mid]<=arr[end]){
            if(target>arr[mid]&&target<=arr[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);

    cout<<rotatedArrBSearch(arr,n,2)<<endl;
    return 0;
}