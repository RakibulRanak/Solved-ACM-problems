#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ara[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ara[i][j];
        }
    }
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int test;
        cin >> test;
        m[test] = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        bool ans = true;
        for (int j = 0; j < 3; j++)
        {
            if (m[ara[i][j]] == 0)
                ans = false;
        }
        if (ans)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        bool ans = true;
        for (int j = 0; j < 3; j++)
        {
            if (m[ara[j][i]] == 0)
                ans = false;
        }
        if (ans)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (m[ara[0][0]] * m[ara[1][1]] * m[ara[2][2]] == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    if (m[ara[0][2]] * m[ara[1][1]] * m[ara[2][0]] == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}