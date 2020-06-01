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
        int sp[n];
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            m[ara[i]] = 1;
            sp[i] = ara[i];
        }
        int ara2[n];
        int j = 0;
        set<int> st;
        for (int i = 1; i <= 2 * n; i++)
        {
            if (m[i] == 0)
            {
                ara2[j] = i;
                st.insert(i);

                j++;
            }
        }
        if (m[1] == 1 && m[2 * n] == 0)
        {
            bool ranak = true;
            map<int, int> mmm;
            for (int i = 0; i < n; i++)
            {

                int xd = ara[i];
                auto pos = st.lower_bound(xd + 1);
                if (pos == st.end())
                {
                    ranak = false;
                    break;
                }
                int xd2 = (*pos);
                // cout << xd << " " << xd2 << " ";
                mmm[xd] = xd2;
                st.erase(xd2);
            }
            if (!ranak)
            {
                cout << -1;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {

                    cout << ara[i] << " " << mmm[ara[i]] << " ";
                }
            }

            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
