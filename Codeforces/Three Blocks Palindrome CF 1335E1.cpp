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
        map<int, int> m1, m2;
        int db[27][2001];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            db[ara[i]][m1[ara[i]]] = i;
            m1[ara[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            int now = ara[i];
            m2[now]++;
            int totalnow = m1[now];
            int usednow = m2[now];
            int bakinow = totalnow - usednow;
            //cout << usednow << endl;

            if (bakinow < usednow)
            {
                ans = max(ans, usednow);
                continue;
            }
            int pos = totalnow - usednow;
            pos = db[now][pos];
            // cout << pos << endl;
            map<int, int> temp;
            for (int j = i + 1; j < pos; j++)
            {
                temp[ara[j]]++;
            }
            int thigh = 0;
            for (int i = 1; i < 27; i++)
            {
                thigh = max(thigh, temp[i]);
            }

            int cal = 2 * usednow;
            cal += thigh;
            ans = max(ans, cal);
        }
        cout << ans << endl;
    }
}
