#include <iostream>
using namespace std;

bool duplicateArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true; // Duplicate found
            }
        }
    }
    return false; // No duplicates
}

int main() {
    int arr[] = {1, 2, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<< "Array contains duplicates: " << (duplicateArray(arr, n) ? "Yes" : "No") << endl;
    return 0;
}