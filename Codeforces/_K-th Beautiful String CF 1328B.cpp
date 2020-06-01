#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    long long big = 0, kick = 1, t1 = 1, t2 = 0;
    map<long long, long long> m, m2;
    set<long long> st;
    st.insert(0);

    while (big < 10000000000)
    {
        big += t1;
        kick += t2;
        // cout << big << endl;
        // cout << kick << endl;

        m[big] = t1;
        m2[t1] = kick;
        st.insert(big);
        // kick = big;
        // kick -= t1;
        t1++;
        t2++;
    }

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        auto it = st.lower_bound(k);
        long long x = (*it);
        int indup = m[x];
        int indstart = m2[indup];


        long long second = k - indstart;

        string ss = "";
        for (int i = 0; i < n; i++)
        {
            if (i == second || i == indup)
            {
                ss = 'b' + ss;
            }
            else
            {
                ss = 'a' + ss;
            }
        }
        cout << ss << endl;
    }
}
