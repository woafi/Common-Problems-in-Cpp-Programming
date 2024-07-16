#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    char a[123]; 
    cin>> a;
    int i = 1;
    a[5] = 'a';
    cout<<(a[i] == '\0');
    while (a[i] == '\0'){
        i++;
    }
    cout<<a[5]<<i;

    return 0;
}