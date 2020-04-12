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
        int ara1[n];
        int ara2[n];
        for (int i = 0; i < n; i++)
            cin >> ara1[i];
        for (int i = 0; i < n; i++)
            cin >> ara2[i];
        sort(ara1, ara1 + n);
        sort(ara2, ara2 + n);
        for (int i = 0; i < n; i++)
            cout << ara1[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << ara2[i] << " ";
        cout << endl;
    }
}
