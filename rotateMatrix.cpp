#include <iostream>
using namespace std;

void rotatedMatrix(int arr[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(int arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
       reverse(arr[i],arr[i]+n);
    }
    rotatedMatrix(arr,n);
}

int main() {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    rotate(arr, 3);
    
    return 0;
}