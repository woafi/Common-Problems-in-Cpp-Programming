#include <iostream>
using namespace std;

void logic(int i, int x, int fact){
    if(i==x){
        fact*=i;
        cout<<fact;
        return;
    }

    fact*=i;
    logic(i+1, x, fact);
}

int main (){
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    logic(1, x, 1);
    return 0;
}