#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int ara[9][9];
        for (int i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 9; j++)
            {
                ara[i][j] = s[j] - '0';
            }
        }
        //check
        int shari = 0;
        int myval[9] = {0, 3, 6, 1, 4, 7, 2, 5, 8};
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                int val = ara[i][j];
                if (i == shari && myval[i] == j)
                {
                    if (val == 9)
                        val = 1;
                    else
                        val++;
                }
                cout << val;
            }
            shari++;
            cout << endl;
        }
    }
}
