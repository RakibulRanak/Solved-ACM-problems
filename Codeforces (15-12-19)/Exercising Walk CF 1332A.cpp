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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool ans = true;

        if (x2 - x1 == 0 && a + b != 0)
            ans = false;
        if (y2 - y1 == 0 && d + c != 0)
            ans = false;

        x = x - a + b;
        y = y - c + d;

        if (x < x1 || x > x2)
            ans = false;
        if (y < y1 || y > y2)
            ans = false;

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
