#include <iostream>
using namespace std;

bool isMonotonic(int arr[], int n){
    bool increasing = false;
    bool decreasing = false;

    for (int i = 0; i < n - 1; i++){
        if (arr[i] < arr[i + 1]){
            increasing = true;
        }
        if (arr[i] > arr[i + 1]){
            decreasing = true;
        }
    }
    if (increasing == true && decreasing == true){
        return false;
    }
    return true;
}

int main(){
    int arr[] = {1, 2, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    cout<<(isMonotonic(arr, n)?"Array is Monotonic":"Array is Not Monotonic")<<endl;

    return 0;
}