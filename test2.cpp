#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    vector<string> operations = {"-21","-66","39","+","+"};

    stack <int> st;

    for (auto u : operations){
        if (u.size() > 1){
            int n = stoi(u);
            st.push(n);
            cout << st.top() << endl <<endl;
        }

        if (u == "+"){
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            int sum = n1 + n2;
            st.push(n1);
            st.push(sum);
            }

        
    }

    int ans = 0;
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
    
    return 0;
}