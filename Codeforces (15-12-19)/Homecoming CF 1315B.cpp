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
        int bus, trum, taka;
        cin >> bus >> trum >> taka;
        string s;
        cin >> s;

        int size = s.size();
        int i = size - 1;
        int ans = 1;
        int j = i - 1;
        char temp = s[i - 1];
        while (i >= 0)
        {
            //bus
            //cout << i << endl;

            if (temp == 'A')
            {
                if (taka < bus)
                {
                    ans = j + 2;
                    break;
                }
                while (j >= 0)
                {
                    if (s[j] == temp)
                    {
                        j--;
                    }
                    else
                    {
                        i = j;
                        taka -= bus;
                        break;
                    }
                }
            }
            else
            {
                // j = i - 1;
                if (taka < trum)
                {
                    ans = j + 2;
                    break;
                }
                while (j >= 0)
                {
                    if (s[j] == 'B')
                    {
                        j--;
                    }
                    else
                    {
                        i = j;
                        taka -= trum;
                        break;
                    }
                }
            }

            //trum
            i = j;

            temp = s[i];
        }
        cout << ans << endl;
    }
}
