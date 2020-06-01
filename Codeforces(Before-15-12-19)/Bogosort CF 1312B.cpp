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
        sort(ara, ara + n);
        for (int i = n - 1; i >= 0; i--)
            cout << ara[i] << " ";
        cout << endl;
    }
}
