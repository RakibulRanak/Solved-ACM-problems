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
        long long ara[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        sort(ara, ara + n);
        int count = 0, i = 0, j = n - 1;

        int ghurbe = n / 2;
        vector<int> vec;
        while (count < ghurbe)
        {
            //cout << ara[i] << " ";
            //cout << ara[j] << " ";
            vec.push_back(ara[i]);
            vec.push_back(ara[j]);
            i++;
            j--;
            count++;
        }
        if (n % 2 == 1)
            vec.push_back(ara[i]);

        //cout << endl;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}
