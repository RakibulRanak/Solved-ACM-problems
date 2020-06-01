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
        long long n, g, b;
        long long ans = 0;
        cin >> n >> g >> b;
        if (g >= b)
        {
            ans = n;
        }
        else
        {

            long long x = (n + 1) / 2;
            //cout << x << endl;
            long long y = n - x;
            long long good = (x + (g - 1)) / g;
            //  cout << good << endl;
            //  long long badcount = (good-1);
            long long bad = (good - 1) * b;
            // cout << bad << endl;
            //good = min(good * g, x);

            long long badhigh = min(y, bad);
            long long bakigood = n - badhigh;
            good = bakigood;
            // cout << good << endl;

            //long long temp = (good-1)*g;

            ans = good + bad;
        }
        cout << ans << endl;
    }

    return 0;
}