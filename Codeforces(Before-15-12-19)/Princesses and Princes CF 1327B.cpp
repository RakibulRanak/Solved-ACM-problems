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
        int after = 0;
        map<int, int> m1, m2;
        for (int i = 0; i < n; i++)
        {
            int total;
            cin >> total;

            bool take = true;

            for (int j = 0; j < total; j++)
            {
                int ttt;
                cin >> ttt;
                if (m2[ttt] == 0 && take)
                {
                    m2[ttt] = 1;
                    m1[i + 1] = 1;
                    take = false;
                    after++;
                }
            }
        }
        if (after < n)
        {
            int ans1 = 0, ans2 = 0;
            for (int i = 1; i <= n; i++)
            {
                if (m1[i] == 0)
                {
                    ans1 = i;
                    break;
                }
            }
            for (int i = 1; i <= n; i++)
            {
                if (m2[i] == 0)
                {
                    ans2 = i;
                    break;
                }
            }
            cout << "IMPROVE" << endl;
            cout << ans1 << " " << ans2 << endl;
        }
        else
        {
            cout << "OPTIMAL" << endl;
        }
    }
}
