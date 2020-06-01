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
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        map<int, int> m;
        m[ara[0]] = 1;
        int mval = ara[0];
        int mcount = 1;
        for (int i = 1; i < n; i++)
        {
            if (ara[i] != ara[i - 1])
            {
                m[ara[i]]++;
            }
            else
            {
                ara[i] = -1;
            }

            if (m[ara[i]] > mcount)
            {
                mval = ara[i];
                mcount = m[ara[i]];
            }
            else if (m[ara[i]] == mcount && ara[i] < mval)
            {
                mval = ara[i];
                mcount = m[ara[i]];
            }
        }
        cout << mval << endl;
    }
}
