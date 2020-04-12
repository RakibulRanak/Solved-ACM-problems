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
        int ara[n], ara2[n];
        map<int, int> minus, zero, one;
        int min = 0, zer = 0, on = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            if (ara[i] == -1)
            {
                min++;
            }
            else if (ara[i] == 0)
            {
                zer++;
            }
            else
            {
                on++;
            }
            minus[i] = min;
            zero[i] = zer;
            one[i] = on;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ara2[i];
        }
        bool ans = true;
        if (ara[0] != ara2[0])
        {
            ans = false;
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (ara2[i] > ara[i] && one[i - 1] == 0)
                {
                    ans = false;
                    break;
                }
                else if (ara2[i] < ara[i] && minus[i - 1] == 0)
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}
