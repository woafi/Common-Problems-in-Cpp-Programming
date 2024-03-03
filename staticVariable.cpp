#include<iostream> 
using namespace std;

int product(int a, int b){
    static int c=0;
    c=c+1;
    return (a*b)+c;
}

int main(){
    int a=2, b=3;

    product(a, b);
    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;
    return 0;
}