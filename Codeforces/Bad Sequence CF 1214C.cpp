#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    bool aaa = true;
    if (n % 2 == 1)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
            ans -= 1;
        else
            ans += 1;
        if (ans < 0)
            break;

    }
    if (ans == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
            ans -= 1;
        else
            ans += 1;
        if (ans < -1)
            aaa = false;
    }
    if(ans!=0)
        aaa=false;
    if (aaa)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
