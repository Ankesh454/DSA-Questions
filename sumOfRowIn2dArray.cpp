#include <iostream>
using namespace std;

void sumOfRow(int arr[][3],int row, int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==1){
                sum+=arr[i][j];
            }
        }

    }
    cout<<"Sum of row 2: "<<sum<<endl;
}

int main() {
    int arr[3][3]={{1,4,9},
                   {11,4,3},
                   {2,2,3}};
    sumOfRow(arr,3,3);
    return 0;
}