#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num = 1000000;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    vector<vector<int>> vec1(1000000);
    vector<vector<int>> vec2(1000000);
    //vector<int> vec2[1000000];
    vector<int> vecx;
    vector<int> vecy;
    map<int, int> m1, m2;
    // cout << "hello" << endl;
    for (int i = 0; i < n; i++)
    {
        int val = ara[i] - i;
        if (val >= 0)
        {
            vec1[val].push_back(ara[i]);
            if (m1[val] == 0)
            {
                vecx.push_back(val);
                m1[val]++;
            }
        }
        else
        {
            val += num;
            vec2[val].push_back(ara[i]);
            if (m2[val] == 0)
            {
                vecy.push_back(val);
                m2[val]++;
            }
        }
    }
    long long high = 0;

    for (int i = 0; i < vecx.size(); i++)
    {
        long long thigh = 0;
        int now = vecx[i];

        for (int j = 0; j < vec1[now].size(); j++)
        {
            thigh += vec1[now][j];
        }

        if (thigh > high)
        {
            high = thigh;
        }
    }
    for (int i = 0; i < vecy.size(); i++)
    {
        long long thigh = 0;
        int now = vecy[i];

        for (int j = 0; j < vec2[now].size(); j++)
        {
            thigh += vec2[now][j];
        }

        if (thigh > high)
        {
            high = thigh;
        }
    }
    cout << high << endl;
}
