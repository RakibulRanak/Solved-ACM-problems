#include <bits/stdc++.h>
using namespace std;

long long power(int a)
{
    long long x = 1;
    for (int i = 1; i <= a; i++)
    {
        x *= 2;
    }
    return x;
}

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
        int count = n / 2;
        int ans1 = 0, ans2 = 0;

        int i = n - 1;
        int temp = 0;
        while (temp < count)
        {
            ans1 += power(i);
            i--;
            temp++;
        }
        for (int i = 1; i < count; i++)
        {
            ans2 += power(i);
        }

        ans2 += power(n);
        cout << ans2 - ans1 << endl;
    }
}