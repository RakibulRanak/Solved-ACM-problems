#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> vec[200005];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    map<int, int> len, vis, parent;

    queue<int> que;
    que.push(1);
    vector<pair<int, int>> pp;
    while (!que.empty())
    {

        int s = que.front();
        que.pop();
        vis[s] = 1;

        for (int i = 0; i < vec[s].size(); i++)
        {
            int val = vec[s][i];

            if (!vis[val])
            {
                //cout << s << " " << val << endl;
                que.push(val);
                len[val] = len[s] + 1;
                parent[val] = s;
                //highlen = max(len[val] + 1, highlen);
                pp.push_back({len[val], val});
            }
        }
    }
    long long ans = 0;
    int count = 0;
    sort(pp.begin(), pp.end());
    vector<int> myans;
    map<int, int> childcount;
    for (int i = pp.size() - 1; i >= 0; i--)
    {
        int curlen = pp[i].first;
        int curval = pp[i].second;

        childcount[parent[curval]] += childcount[curval] + 1;
        int childase = childcount[curval];
        // cout << curval << " " << curlen << " " << childase << endl;

        myans.push_back(curlen - childase);
    }

    sort(myans.begin(), myans.end());
    int start = myans.size() - 1;

    while (count < k)
    {
        ans += myans[start];
        start--;
        count++;
    }
    cout << ans << endl;
}
