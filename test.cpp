#include<iostream> 
#include <algorithm> 
using namespace std;



int main(){
    int p;
    cin>>p;
    int solution;
    int count;
    while(p--){
        int a,b,c;
        cin>>a>>b>>c;
        solution = a + b + c;
        if(solution == 0){
            count++;
        }
    }
    return 0;
}