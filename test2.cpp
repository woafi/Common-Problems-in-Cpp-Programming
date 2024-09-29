#include <bits/stdc++.h>
using namespace std;

// Typedefs for common data types
typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vpii;

typedef vector<int> :: iterator vit;
typedef set<int> :: iterator sit;

// Frequently used macros for loops
#define endl '\n'
#define SZ(x) (int)(x).size()
#define ALL(v) v.begin(), v.end()
#define F first
#define S second
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    set <char> se;
    string s;
    cin >> s;
    for (int i = 0; i < SZ(s); i++) {
        se.insert(s[i]);
    }
    if (SZ(se) % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}