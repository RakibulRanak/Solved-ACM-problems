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
        string s;
        cin >> s;

        string s1 = "1", s2 = "1";
        bool paisichoto = false;
        //int duichotote = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (!paisichoto)
                {
                    s1 += '0';
                    s2 += '1';
                    paisichoto = true;
                }
                else
                {
                    s1 += '1';
                    s2 += '0';
                }
            }

            else if (s[i] == '2')
            {
                if (!paisichoto)
                {
                    s1 += '1';
                    s2 += '1';
                }
                else
                {
                    s1 += '2';
                    s2 += '0';
                }
            }
            else
            {

                s1 += '0';
                s2 += '0';
            }
        }
        cout << s1 << endl
             << s2 << endl;
    }
}
