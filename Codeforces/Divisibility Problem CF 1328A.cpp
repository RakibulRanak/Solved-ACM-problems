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
        long long a, b, temp;
        cin >> a >> b;
        temp = (a + b - 1) / b;

        temp = b * temp;
        cout << temp - a << endl;
    }
}
