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
        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];
        int x = 2;
        vector<pair<int, int>> sol;
        while (x--)
        {
            map<int, int> m1, m2;
            bool ans = true;
            int vis = 0, ans1 = 0, ans2 = 0, temp = 0;
            for (int i = 0; i < n; i++)
            {
                vis++;
                if (m1[ara[i]] == 0)
                {
                    m1[ara[i]] = 1;
                    temp = max(temp, ara[i]);
                    if (vis == temp)
                        ans1 = vis;
                }
                else
                    break;
            }
            //cout << ans1 << " " << n - ans1 << endl;
            if (ans1 == n)
            {
                ans = false;
            }
            else
            {
                vis = 0;
                temp = 0;
                for (int j = n - 1; j >= ans1; j--)
                {
                    vis++;
                    if (m2[ara[j]] == 0)
                    {
                        m2[ara[j]] = 1;
                        temp = max(temp, ara[j]);
                        if (vis == temp)
                            ans2 = vis;
                    }
                    else
                        break;
                }
                if (ans2 != n - ans1)
                    ans = false;
            }
            if (ans)
            {
                //cout << ans1 << " " << ans2 << endl;
                if (x == 1)
                    sol.push_back({ans1, ans2});
                else
                {
                    if (sol.size() > 0)
                    {
                        if (sol[0].first != ans2 && sol[0].second != ans1)
                        {
                            sol.push_back({ans2, ans1});
                        }
                    }
                    else
                    {
                        sol.push_back({ans2, ans1});
                    }
                }
            }

            reverse(ara, ara + n);
        }
        cout << sol.size() << endl;
        for (int i = 0; i < sol.size(); i++)
        {
            cout << sol[i].first << " " << sol[i].second << endl;
        }
    }
}
