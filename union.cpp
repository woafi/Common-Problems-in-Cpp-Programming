#include<iostream> 
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 32;
    cout<<m1.rice;
    return 0;
}