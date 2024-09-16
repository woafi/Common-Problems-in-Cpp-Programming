#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    
    string s;
    cin >> s;
    string str;
    s.erase( remove (s.begin(), s.end(), '+'),s.end());
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        str += s[i];
        str += "+";

    }
    str.pop_back();
    cout<< str <<endl;
    
    

    return 0;
}