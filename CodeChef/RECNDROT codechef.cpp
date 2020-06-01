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
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            vec.push_back({inp, i});
        }
        sort(vec.begin(), vec.end());

        int ans = 1, i = 0, pos = 0;
        map<int, int> vis;
        while (i < n)
        {
            int nowv = vec[i].first;
            int nowp = vec[i].second;
            if (vis[nowv] == 1)
            {
                i++;
                continue;
            }
            vis[nowv] = 1;
            if (nowp < pos)
            {
                int j = i + 1;
                bool temp = false;
                while (j < n && vec[j].first == nowv)
                {
                    if (vec[j].second > pos)
                    {
                        temp = true;
                        break;
                    }
                    j++;
                }
                if (!temp)
                {
                    ans++;
                    pos = nowp;
                    i = j;
                }
                else
                {
                    pos = vec[j].second;
                    i = j + 1;
                }
            }
            else
            {
                pos = nowp;
                i++;
            }
        }
        cout << ans << endl;
    }
}
