#include <iostream>
using namespace std;

void noOfAll7(int arr[][3],int row, int col){
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==7){
                count++;
                cout<<"7 found at index: "<<i<<","<<j<<endl;
            }
        }
    }
    cout<<"Number of 7s in the 2D array: "<<count<<endl;
}

int main() {
    int arr[2][3]={{4,7,8},
                  {8,8,7}};

    noOfAll7(arr,2,3);

    return 0;
}