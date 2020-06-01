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
        long long n;
        cin >> n;
        long long test = (n + 1) / 2;
        if (n % 2 == 0)
        {
            n--;
        }
        cout << n - test << endl;
    }
}
