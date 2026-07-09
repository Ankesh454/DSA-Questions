#include <iostream>
using namespace std;

void printTranspose(int arr[][2], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3],int row,int col){
    int transpose[3][2];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    printTranspose(transpose, col, row);

}

int main() {
    int arr[2][3]={{1,2,3},
                {5,6,7}};
    transpose(arr, 2, 3);
    return 0;
}