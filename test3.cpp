#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    
    string s = "100", u = "10";
    sort(s.rbegin(), s.rend());
    cout<<s<<endl;
    if (u == s){
        cout<<"1"<<endl;
    }
    


    return 0;
}