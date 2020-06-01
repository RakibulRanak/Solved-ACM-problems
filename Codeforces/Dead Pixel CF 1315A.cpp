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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int x1, x2, y1, y2;
        x1 = x;
        x2 = a - (x + 1);
        y1 = y;
        y2 = b - (y + 1);

        //cout << x1 << " " << x2 << " " << y1 << " " << y2 << endl;

        int ans = 0;
        int temp = x1 * b;
        ans = max(ans, temp);
        temp = a * y1;
        ans = max(ans, temp);
        temp = x2 * b;
        ans = max(ans, temp);
        temp = a * y2;
        ans = max(ans, temp);
        cout << ans << endl;
    }
}
