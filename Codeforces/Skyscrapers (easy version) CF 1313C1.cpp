#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    long long ans = 0;
    long long before = ara[ans];
    int ansindex = 0;
    int i = 0;

    while (i < n)
    {

        long long temp = ara[i];
        long long before = ara[i];
        for (int j = i - 1; j >= 0; j--)
        {
            before = min(ara[j], before);

            temp += before;
        }
        before = ara[i];
        for (int j = i + 1; j < n; j++)
        {
            before = min(ara[j], before);
            temp += before;
        }
        if (temp > ans)
        {
            ans = temp;
            ansindex = i;
        }
        i++;
    }
    // cout << ansindex << endl;
    long long ara2[n];
    ara2[ansindex] = ara[ansindex];
    for (int i = ansindex - 1; i >= 0; i--)
    {
        ara2[i] = min(ara[i], ara[i + 1]);
        ara[i] = ara2[i];
    }
    for (int i = ansindex + 1; i < n; i++)
    {
        ara2[i] = min(ara[i], ara[i - 1]);
        ara[i] = ara2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ara2[i] << " ";
    }
}
