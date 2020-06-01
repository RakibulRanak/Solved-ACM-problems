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
        int dis = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            if (m[ara[i]] == 0)
            {
                dis++;
            }
            m[ara[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int ase = m[ara[i]];
            int tans1 = min(ase, dis - 1);
            int tans2 = min(ase - 1, dis);
            int tans = max(tans1, tans2);
            ans = max(ans, tans);
        }
        cout << ans << endl;
    }
}
