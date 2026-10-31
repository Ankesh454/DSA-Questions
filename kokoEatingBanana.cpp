#include <iostream>
using namespace std;

int eatSpeed(vector<int>& piles, int k){
    int totalHrs = 0;

    for(int i = 0;i<piles.size();i++){
        totalHrs += (piles[i] + k - 1) / k;
    }
    return totalHrs;
}

int minEatingSpeed(vector<int>& piles, int h){
    int maximum = 0;

    for(int i=0;i<piles.size();i++){
        maximum= max(maximum,piles[i]);
    }

    int low=1, high=maximum;

    while(low<=high){
        int mid = (low+high)/2;

        int reqTime = eatSpeed(piles,mid);

        if(reqTime<=h){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
}

int main() {
    vector<int> piles = {3,6,7,11};

    cout<<minEatingSpeed(piles, 8)<<endl;
    return 0;
}