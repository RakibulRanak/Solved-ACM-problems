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
        int n;
        cin >> n;
        bool ans = true;
        int pmin = 0, cmin = 0;
        int disp = 0, disc = 0;
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;

            if (p < pmin)
                ans = false;
            else
            {
                disp = p - pmin;
                pmin = p;
            }
            if (c < cmin)
                ans = false;
            else
            {
                disc = c - cmin;
                cmin = c;
            }

            if (disc > disp)
            {
                ans = false;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}
