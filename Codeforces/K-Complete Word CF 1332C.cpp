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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int right = (k - 1) / 2;
        int left = right + 1;
        //cout << right << " " << left << endl;
        int i = 0, j = k - 1;
        int ans = 0;
 
        while (i <= j)
        {
            int temp = 0;
            map<char, int> m;
            int high = 0;
            int step = n / k;
            if (i <= right)
            {
                for (int h = i; h < n; h += k)
                {
                    m[s[h]]++;
                    high = max(high, m[s[h]]);
                }
            }
            if (j >= left)
            {
                for (int h = n - i - 1; h >= 0; h -= k)
                {
                    m[s[h]]++;
                    high = max(high, m[s[h]]);
                    //cout << s[h] << endl;
                }
                step *= 2;
            }
 
            ans += step - high;
            i++;
            j--;
        }
        cout << ans << endl;
    }
}