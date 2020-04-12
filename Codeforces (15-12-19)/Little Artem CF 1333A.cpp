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
        int n, m;
        cin >> n >> m;
        int p = n * m;

        string s = "";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    // cout << 'B';
                    s = s + 'B';
                }
                else
                {
                    //cout << 'W';
                    s = s + 'W';
                }
            }
            // cout << endl;
        }
        if (p % 2 == 0)
        {
            if (s[p - 1] == 'W')
            {
                s[p - 1] = 'B';
            }
            else
            {
                s[p - 2] = 'B';
            }
        }
        int xd = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << s[xd];
                xd++;
            }
            cout << endl;
        }
    }
}
