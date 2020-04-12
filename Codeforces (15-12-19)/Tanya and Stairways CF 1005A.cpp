#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ara[n];
    int ans = 0;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        if (ara[i] == 1)
        {
            ans++;
            vec.push_back(i);
        }
    }
    vec.push_back(n);
    cout << ans << endl;
    for (int i = 1; i < vec.size(); i++)
    {
        cout << vec[i] - vec[i - 1] << " ";
    }
    cout << endl;
}