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

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
    cerr << arg << ' ';
    faltu(rest...);
}

int main() {
    optimize();

    vi v1(3) , v2(3) , v3;
    for (int i = 0; i < 3; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> v2[i];
    }

    int a = 0, b = 0;

    for (int i = 0; i < 3; i++)
    {
        if (v1[i] > v2[i]){
            a +=1;
        }
        if (v1[i] < v2[i]){
            b += 1;
        }
    }
    
    cout<<a << " "<< b;
    

    return 0;
}