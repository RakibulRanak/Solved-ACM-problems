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
        double val;
        cin >> n >> val;
        double ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];
        sort(ara, ara + n, greater<double>());
        double sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ara[i];
            double test = sum / (i + 1);
            if (test < val)
                break;
            ans++;
        }
        cout << ans << endl;
    }
}
