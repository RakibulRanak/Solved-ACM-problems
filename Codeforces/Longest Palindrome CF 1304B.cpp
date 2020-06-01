#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string ara[n];
    map<string, int> mm;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        ara[i] = temp;
        mm[temp]++;
    }
    string left = "", right = "", middle = "";
    int midcount = 0;
    for (int i = 0; i < n; i++)
    {
        string t1 = ara[i];
        if (mm[t1] <= 0)
            continue;
        string t2 = t1;
        reverse(t2.begin(), t2.end());
        if (t1 == t2)
        {
            middle = t1;
        }

        else if (mm[t2] > 0)
        {
            left += t1;
            right = t2 + right;
            mm[t1]--;
            mm[t2]--;
        }
    }

    string ans = left + middle + right;
    cout << ans.size() << endl;
    cout << ans << endl;
}
