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
        int n, zero = 0, sum = 0, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 0)
                zero++;
            else
                sum+=temp;
        }
        if (zero == 0)
        {
            if (sum != 0)
            {
                ans = 0;
            }
            else
            {
                ans = 1;
            }
        }
        else
        {
            if (sum < 0)
            {
                int total = abs(sum);
                if (zero < total)
                    ans = zero;
                else if (zero == total)
                {
                    ans = zero + 1;
                }
                else
                {
                    ans = zero;
                }
            }
            else
            {
                ans = zero;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}