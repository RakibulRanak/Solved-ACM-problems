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
        int n, a, b;
        cin >> n >> a >> b;
        bool ans = false;
        while (a + b > 0)
        {
            if (a > 0)
            {
                //a
                int temp = n - ((n / 2) + 10);
                if (temp > 0)
                {
                    n -= temp;
                    a--;
                }
                else
                {
                    a = 0;
                }
            }
            else
            {
                n -= 10;
                b--;
            }

            if (n <= 0)
            {
                ans = true;
                break;
            }

            //cout << n << " " << a << " " << b << endl;
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
