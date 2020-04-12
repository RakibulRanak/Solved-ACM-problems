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
        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];

        map<int, int> m;

        int count = 0;
        vector<pair<int, int>> vec;
        int div = 2;
        int color = 1;
        while (count < n)
        {

            bool noshto = false;
            for (int i = 0; i < n; i++)
            {
                if (ara[i] % div == 0 && m[i] == 0)
                {
                    vec.push_back({i, color});
                    // cout << i << " " << color << endl;
                    count++;
                    m[i] = 1;
                    noshto = true;
                }
            }
            div++;
            if (noshto)
                color++;
        }
        sort(vec.begin(), vec.end());
        cout << color - 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vec[i].second << " ";
        }
        cout << endl;
    }
}
