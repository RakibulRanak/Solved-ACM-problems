#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int ara1[n];
    int ara2[n];
    int dis = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ara1[i];
        sum1 += ara1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ara2[i];
        sum2 += ara2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ara1[i] == 1 && ara2[i] == 0)
            dis++;
    }
    if (sum1 == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (sum1 == sum2)
    {
        if (dis > 0)
            cout << 2 << endl;
        else
        {
            cout << -1 << endl;
        }

        return 0;
    }
    if (sum1 > sum2)
    {
        cout << 1 << endl;
        return 0;
    }
    if (sum1 < sum2)
    {
        int dorkar = sum2 - sum1;
        dorkar++;
        //cout << dorkar << " " << dis << endl;
        if (dis > 0)
        {
            int aaa = (dorkar + (dis - 1)) / dis;
            cout << aaa + 1 << endl;
            return 0;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
}
