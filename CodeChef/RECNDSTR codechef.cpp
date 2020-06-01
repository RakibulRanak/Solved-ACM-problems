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
        string s;
        cin >> s;

        string ls1, ls2, ls, rs1, rs2, rs;
        int len = s.length();

        ls1 = s.substr(0, 1);
        ls2 = s.substr(1, len - 1);

        ls = ls2 + ls1;

        rs1 = s.substr(0, len - 1);
        rs2 = s.substr(len - 1, 1);

        rs = rs2 + rs1;
        // cout << ls << endl;
        // cout << rs << endl;
        if (ls == rs)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
