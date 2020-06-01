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
        double n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        double t1, t2, t3, t4;
        t1 = a - b;
        t2 = a + b;
        t3 = c - d;
        t4 = c + d;
        bool ans = false;

        //cout << x << " " << y << endl;
        for (double i = t3; i <= t4; i++)
        {
            double x = i / n;
            //double y = t4 / n;
            if (x >= t1 && x <= t2){
                ans = true;
                break;
            }
           
        }

        if (ans)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}
