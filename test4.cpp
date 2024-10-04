#include <bits/stdc++.h>
using namespace std;

// Typedefs for common data types
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        ll n, k; 
        cin >> n >> k;
        int op = 0;

        // While n is not zero, keep subtracting the highest power of k
        while (n > 0) {
            ll p = 1; // Start with k^0 = 1
            // Find the highest power of k that is <= n
            while (p * k <= n) {
                p *= k;
            }
            n -= p;
            op++;
        }

        cout << op << endl;
    }

    return 0;
}
