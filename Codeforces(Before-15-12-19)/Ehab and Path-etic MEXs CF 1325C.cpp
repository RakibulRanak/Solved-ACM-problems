#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    map<int, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        vec.push_back({a, b});
        m[a]++;
        m[b]++;
    }
    int t1 = -1, t2 = -1;
    int ans[n - 1];
    memset(ans, -1, sizeof(ans));

    for (int i = 0; i < vec.size(); i++)
    {
        int a, b;
        a = vec[i].first;
        b = vec[i].second;
        if (m[a] > 2)
        {
            t1 = a;
            break;
        }
        else if (m[b] > 2)
        {
            t2 = b;
            break;
        }
    }
    int temp = 0;
    if (t1 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            a = vec[i].first;
            b = vec[i].second;
            if (a == t1 || b == t1)
            {
                ans[i] = temp;
                temp++;
            }
        }
        t1 = 0;
    }
    if (t1 != 0 && t2 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            a = vec[i].first;
            b = vec[i].second;
            if (b == t2 || a == t2)
            {
                ans[i] = temp;
                temp++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] != -1)
        {
            cout << ans[i] << endl;
        }
        else
        {
            cout << temp << endl;
            temp++;
        }
    }
}
