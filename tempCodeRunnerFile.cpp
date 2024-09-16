#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector <int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (c[i] >= c[k]){
            cnt++;
        }
    }
    cout<< cnt <<endl;
    

    return 0;
}