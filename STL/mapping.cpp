#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    map < string, int > id;
    
    id ["woafi"] = 1;
    id [ "elan"] = 6;
    id [ "eulaa"] = 2;
    id [ "fdni"] = 4;

    cout<< id ["woafi"] <<endl;

    map <string, string> s;

    s [ "zhongli"] = "male";
    s ["mona"] = "female";

    cout<< s [ "zhongli"]<<" "<< s ["mona"]<<endl<<endl;

    for (auto u : id) cout<< u.first << " " << u.second <<endl;


    return 0;
}