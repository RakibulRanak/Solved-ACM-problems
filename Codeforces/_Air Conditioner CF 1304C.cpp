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
        int arrival[n], low[n], high[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrival[i] >> low[i] >> high[i];
        }
        bool ans = true;
        int now = 0;

        int left = m, right = m;
        for (int i = 0; i < n; i++)
        {
            int time = arrival[i] - now;
            now = arrival[i];
            left -= time;
            right += time;
            // cout << left << " " << right << endl;
            if (high[i] < left || low[i] > right)
            {
                ans = false;
                break;
            }
            else
            {
                if (low[i] > left)
                {
                    left = low[i];
                }
                if (high[i] < right)
                {
                    right = high[i];
                }
            }
            // cout << left << " " << right << endl;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
