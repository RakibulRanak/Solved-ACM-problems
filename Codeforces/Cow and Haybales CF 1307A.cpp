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
        int n, d;
        cin >> n >> d;
        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];
        int now = d;
        int i = 1;
        int ans = ara[0];
        while (now / i > 0 && i < n)
        {
            int temp = min(ara[i], now / i);
            // cout << temp << " ";
            now -= (temp * i);
            // cout << now << endl;
            ans += temp;
            i++;
        }
        cout << ans << endl;
    }
}
