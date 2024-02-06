#include <iostream>
using namespace std;

void fibo(long first, long sec, long n){
    if(n==0){
        return;
    }

    long nxtteram=first+sec;
    cout<<nxtteram<<" ";
    fibo(sec, nxtteram, n-1);
}

int main(){
    long n=5;
    cout<<"0 ";
    cout<<"1 ";
    fibo(0, 1, n-2);
    
    return 0;
}