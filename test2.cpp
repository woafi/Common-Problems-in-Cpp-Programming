#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPair(int i, int j, int arr[], int n){
    if (i != j && arr[ i ] - arr[ j ] == n){
        return true;
    }
    return false;
}

int main(){
    optimize();

    int arr[]= {1, 5, 4, 1, 2};
        int len = sizeof(arr)/sizeof(arr[0]);
        int n = 0;
        vector <pair<int, int>> v;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if ( isPair(i, j, arr, n)){
                    v.push_back({arr[i], arr[j]});
                }
            }
            
        }
        sort (v.begin(), v.end());
        int Sz = unique (v.begin(), v.end()) - v.begin();
        cout << Sz << endl;
        
    return 0;
}