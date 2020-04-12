#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    if (n > m)
    {
        cout << 0 << endl;
        return 0;
    }
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = (ans * abs(ara[j] - ara[i])) % m;
        }
    }
    cout << ans << endl;
}
