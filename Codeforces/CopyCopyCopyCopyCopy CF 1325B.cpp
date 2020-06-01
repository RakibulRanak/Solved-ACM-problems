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

        sort(ara, ara + n);
        int ans = 1;
        int temp = ara[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (ara[i] < temp)
            {
                ans++;
                temp = ara[i];
            }
        }
        cout << ans << endl;
    }
}
