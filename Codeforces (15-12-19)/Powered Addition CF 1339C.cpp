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
        long long temp;
        long long low;
        long long highval = 0;
        cin >> low;

        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            low = max(low, temp);
            highval = max(highval, low - temp);
        }
        long long answer;
        //cout << low << " " << high << endl;
        if (highval == 0)
        {
            answer = 0;
        }
        else
        {
            answer = log2(highval);
            answer++;
        }
        cout << answer << endl;
    }
}
