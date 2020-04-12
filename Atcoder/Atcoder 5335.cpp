#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    int ara[n + 1];
    map<int, int> mp;
    for (int i = 0; i < 4; i++)
    {
        mp[i] = -1;
    }
    if (n == 1)
    {
        bool ans = true;

        for (int i = 0; i < m; i++)
        {
            int index, value;
            cin >> index >> value;
            if (mp[index] == -1)
            {
                mp[index] = value;
            }
            else if (mp[index] != value)
            {
                ans = false;
            }
        }
        if (!ans)
            cout << -1 << endl;
        else
        {
            if (mp[1] == -1)
            {
                mp[1] = 0;
            }
            cout << mp[1] << endl;
        }
    }
    else
    {
        bool ans = true;

        for (int i = 0; i < m; i++)
        {
            int index, value;
            cin >> index >> value;
            if (index == 1 && value == 0)
            {
                ans = false;
                mp[index] = 0;
            }
            else if (mp[index] == -1)
            {
                mp[index] = value;
            }
            else if (mp[index] != value)
            {
                ans = false;
            }
        }
        if (!ans)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] == -1)
                {
                    if (i == 1)
                        cout << 1;
                    else
                        cout << 0;
                }
                else
                {
                    cout << mp[i];
                }
            }
            cout << endl;
        }
    }
}