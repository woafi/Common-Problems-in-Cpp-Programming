#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int num;
        cin >> num; 
        vector<int> res; 
        for (int i = 0; i < num; i++) {
            string ro;
            cin >> ro;
            for (int j = 0; j < ro.length(); j++) {
                if (ro[j] == '#') {
                    res.push_back(j + 1); 
                    break; 
                }
            }
        }
        for (int i = num - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
