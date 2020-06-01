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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long dis = y - x;
        long long total = a + b;
        long long temp = dis / total;
        if (temp * total == dis)
        {
            cout << temp << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
