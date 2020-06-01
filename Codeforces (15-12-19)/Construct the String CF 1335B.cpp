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
        int n, a, b;
        cin >> n >> a >> b;
        char x = 'a';
        int tt = 0;
        string s = "";
        for (int i = 0; i < a; i++)
        {
            if (tt < b)
            {
                //cout<<x;
                s += x;
                x++;
            }
            else
            {
                //cout<<'a';
                s += "a";
            }
            tt++;
        }
        int baki = n - a;
        for (int i = 0; i < baki; i++)
        {
            char temp = s[s.size() - a];
            s += temp;
        }

        cout << s << endl;
    }
}
