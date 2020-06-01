#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int ans = 0;
    int x;
    cin >> x;
    cin >> s;

    while (s.size() > 1)
    {
        char tempor;
        int index = -1;
        char val = 'a';
        for (int j = 0; j < s.size(); j++)
        {
            tempor = s[j];
            if (j == 0)
            {
                if (tempor - s[j + 1] == 1 && tempor > val)
                {
                    index = j;
                    val = tempor;
                }
            }
            else if (j == s.size() - 1)
            {
                if (tempor - s[j - 1] == 1 && tempor > val)
                {
                    index = j;
                    val = tempor;
                }
            }
            else
            {
                if (tempor - s[j - 1] == 1 && tempor > val)
                {
                    index = j;
                    val = tempor;
                }
                if (tempor - s[j + 1] == 1 && tempor > val)
                {
                    index = j;
                    val = tempor;
                }
            }
        }
        if (index == -1)
        {
            break;
        }
        ans++;
        s.erase(s.begin() + index);
        // cout << s << endl;
    }
    cout << ans << endl;
}
