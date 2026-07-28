#include <iostream>
using namespace std;

const int M=1e9+7;

long long findPow(long long a,long long b){
    if(b==0){
        return 1;
    }
    long long halffindPow=findPow(a,b/2);
    long long result=(halffindPow*halffindPow)%M;

    if(b%2!=0){
        return (a*result) % M;
    }
    return result;
}

int countGoodNumbers(long long n) {
        return (findPow(5,(n+1)/2) * findPow(4,n/2))%M;
}

int main() {
    cout<<countGoodNumbers(50)<<endl;
    return 0;
}