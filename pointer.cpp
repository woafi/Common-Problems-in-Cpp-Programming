#include<iostream> 
using namespace std;

int main(){
    int a=3;
    int* b = &a;
    cout<< *b;
    return 0;
}