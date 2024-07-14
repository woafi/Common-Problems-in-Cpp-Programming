#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n; cin>> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    ll plat = 0;
    while (plat < n-1 && arr[plat] < arr[plat + 1]){
        plat++;
    }
    
    cout<<arr[plat]<<endl;

    return 0;
}