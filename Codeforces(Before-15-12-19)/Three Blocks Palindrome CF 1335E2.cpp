#include <bits/stdc++.h>
using namespace std;
#define M 201

std::vector<int> v[M];

int totalInRange(int left, int right, int k)
{
    if (right < left)
        return 0;
    int a, b;

    a = lower_bound(v[k].begin(), v[k].end(), left) - v[k].begin();
    b = upper_bound(v[k].begin(), v[k].end(), right) - v[k].begin();
    return b - a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < M; i++)
            v[i].clear();
        int x, n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            v[x].push_back(i);
        }
        int ans = 0;
        for (int i = 0; i < M; i++)
        {
            ans = max(ans, (int)v[i].size());

            int s, a, b, p, q;
            a = 0;
            b = v[i].size() - 1;
            while (a < b)
            {
                p = v[i][a] + 1;
                q = v[i][b] - 1;

                for (int k = 1; k < M; k++)
                {
                    ans = max(ans, 2 * (a + 1) + totalInRange(p, q, k));
                }
                a++, b--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}