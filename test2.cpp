#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    for (int i = 0; i < 4 * n - 1; i++)
    {
        int a;
        cin >> a;
        cnt[a] += 1;
    }


 for (int i = 1; i <= n; i++){
        if (cnt[i] == 3)
        {
            cout <<i;
        }
    }
    

    return 0;
}