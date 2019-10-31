#include <bits/stdc++.h>
using namespace std;

//great

int main() {

    int n;
    cin >> n;
    int grid[n][n];
    int fill = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            grid[i][j]              = 4 * fill + 1; 
            grid[i][j + n / 2]        = 4 * fill + 2; 
            grid[i + n / 2][j]        = 4 * fill + 3; 
            grid[i + n / 2][j + n / 2]  = 4 * fill; 
            fill++;

        }
    }

    for (int i = 0; i < n; i++) {
        int x=0;
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}