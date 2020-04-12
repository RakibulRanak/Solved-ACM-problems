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
        int ara[3];
        int ans = 0;
        cin >> ara[0] >> ara[1] >> ara[2];
        sort(ara, ara + 3, greater<int>());
        if (ara[0] > 0)
        {
            ans++;
            ara[0]--;
        }
        if (ara[1] > 0)
        {
            ans++;
            ara[1]--;
        }
        if (ara[2] > 0)
        {
            ans++;
            ara[2]--;
        }
        if (ara[0] > 0 && ara[1] > 0)
        {
            ans++;
            ara[0]--;
            ara[1]--;
        }
        if (ara[0] > 0 && ara[2] > 0)
        {
            ans++;
            ara[0]--;
            ara[2]--;
        }

        if (ara[1] > 0 && ara[2] > 0)
        {
            ans++;
            ara[1]--;
            ara[2]--;
        }
        if (ara[0] > 0 && ara[1] > 0 && ara[2] > 0)
            ans++;

        cout << ans << endl;
    }
}
