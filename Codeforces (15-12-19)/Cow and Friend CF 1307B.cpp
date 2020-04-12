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
        int n, x;
        cin >> n >> x;
        int ara[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            m[ara[i]] = 1;
        }
        sort(ara, ara + n, greater<int>());
        int i = 0;
        int ans = 0;

        while (i < n && x > 0)
        {
            int temp = ara[i];

            if (m[x] == 1)
            {
                ans += 1;
                x = 0;
                break;
            }

            if (i > 0)
            {
                int xd = ara[i - 1] + x;

                if (xd <= 2 * temp)
                {
                    // ans--;
                    // ans += 2;
                    ans++;
                    x = 0;
                    break;
                }
            }

            else if (temp * 2 >= x)
            {
                ans += 2;
                x = 0;
                break;
            }
            else
            {

                int t = x / temp;
                x -= t * temp;
                ans += t;
            }
            i++;
        }
        if (x != 0)
            ans += 1;
        cout << ans << endl;
    }
}
