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
        long long ans = 0;
        if (2 * a <= b)
        {
            ans = x * a + y * a;
        }
        else
        {
            long long temp = min(x, y);
            ans +=temp * b;
            x -= temp;
            y -= temp;
            ans += x * a;
            ans += y * a;
        }
        cout<<ans<<endl;
    }
}
