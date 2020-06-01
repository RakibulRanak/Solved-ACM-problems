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
        int left = 0, right = 0;
        int len = s.size();
        int i = 0;
        while (i < len)
        {
            if (s[i] == '1')
            {
                left = i;
                i++;
                break;
            }
            i++;
        }
        right = left;
        while (i < len)
        {
            if (s[i] == '1')
            {
                right = i;
            }
            i++;
        }
        int count = 0;
        //cout << left << " " << right << endl;
        for (int i = left; i <= right; i++)
        {
            if (s[i] == '0')
                count++;
        }
        if (left == right)
            count = 0;
        cout << count << endl;
    }
}
