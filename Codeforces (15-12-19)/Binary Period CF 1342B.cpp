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
        char a = s[0];
        string ans = "";
        int zero = 0;
        int one = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero++;
            
            else
                one++;
        }
        if (zero == 0 || one == 0)
            ans = s;

        else if (a == '0')
        {
            int count = 0;
            int i = 0;
            while (count < s.size() || ans.size() % 2 == 1)
            {

                if (i % 2 == 0)
                {
                    ans += '0';
                    if (s[count] == '0')
                        count++;
                }
                else
                {
                    ans += '1';
                    if (s[count] == '1')
                        count++;
                }
                i++;
            }
        }
        else
        {
            int count = 0;
            int i = 0;
            while (count < s.size() || ans.size() % 2 == 1)
            {
                if (i % 2 == 0)
                {
                    ans += '1';
                    if (s[count] == '1')
                        count++;
                }
                else
                {
                    ans += '0';
                    if (s[count] == '0')
                        count++;
                }
                i++;
            }
        }
        cout << ans << endl;
    }
}
