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
        int n, d;
        cin >> n >> d;
        int ara[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            m[ara[i]] = 1;
        }
        int ans = 0;
        int count = 0;
        int i = 1;

        while (count < d)
        {
            if (m[i] == 0)
            {
                m[i] = 1;
                count++;
            }

            i++;
            //cout << count << endl;
        }
        i = 1;
        while (m[i] == 1)
        {

            ans = i;
            i++;
            //cout << count << endl;
        }
        cout << ans << endl;
    }
}
