#include <iostream>
using namespace std;
//magic Square Algorithm
void magic(int n){
    if (n % 2 == 0){
        cout<<"Even";
        return;
    } else{
        for (int i=0; i<n-1; i++){
            for (int j=0; j<n-1; j++){
                int square[i][j] = 0;
                square[0][(n-1)/2] = 1;
                j =(n-1)/2;
                for (int key=2; key<(n*n); key++){
                    int k,l;
                    if (i>=1){k=i-1;} else {k=n-1;}
                    if (j>=1){l=j-1} else {l=n-1;}
                    if (sqaure[k][l] >= 1) {i=(i+1)%n;
                    }else {
                        i=k;
                        j=l;
                    }
                    square[i][j]=key;
                }
            }
        }
        for (int i=0; i<n-1; i++){
            for (int j=0; j<n-1; j++){
                cout<<square[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    magic(n);  //calling algorithm

    return 0;
}