#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, m;
    cin >> n >> m;

    char grid[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int i, j;
    cin >> i >> j;
    i--; j--;

                int x, y;
                x = i - 1;
                y = j - 1;
                bool isAns = false;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                   if(grid[x][y] == 'x') {
                   isAns = true;
                } else {
                    isAns = false;
                }
                }
                x = i - 1;
                y = j;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if(grid[x][y] == 'x') {
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i - 1;
                y = j + 1;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x'){ isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i;
                y = j - 1;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x' ){
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i;
                y = j + 1;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x'){
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i + 1;
                y = j - 1;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x'){
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i + 1;
                y = j;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x'){
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                x = i + 1;
                y = j + 1;
                if ( x >= 0 && x < n && y >=0 && y < m ){
                    if (grid[x][y] == 'x'){
                    isAns = true;
                }else {
                    isAns = false;
                }
                }
                if (isAns) {
                    cout<<"yes"<<endl;
                } else {
                    cout<<"no"<<endl;
                }

    return 0;
}