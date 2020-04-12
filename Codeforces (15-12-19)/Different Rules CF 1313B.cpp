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
        int n, a, b;
        cin >> n >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }

        int leftupore, leftniche, rightupore, rightniche, l1, l2, r1, r2;
        leftupore = a - 1;
        rightupore = b - 1;
        leftniche = n - a;
        rightniche = n - b;
        int ans1 = 0;
        l1 = leftupore;
        l2 = leftniche;
        r1 = rightupore;
        r2 = rightniche;
        int fav = 0;

        //favourable
        if (leftniche + rightniche < 2)
        {
            fav = 0;
        }
        else
        {
            //favourable

            leftniche--;
            rightniche--;
            fav++;
            long long temp;
            temp = min(leftniche, rightupore);
            leftniche -= temp;
            //cout << temp << endl;
            fav += temp;
            temp = min(leftupore, rightniche);
            fav += temp;
            rightniche -= temp;
            // cout << temp << endl;
            temp = min(leftniche, rightniche);
            fav += temp;
        }
        // cout << fav << " fav" << endl;
        ans1 = n - fav;

        fav = 0;
        long long temp;
        temp = min(l2, r1);
        // cout << temp << endl;
        l2 -= temp;
        r1 -= temp;
        fav += temp;

        temp = min(r2, l1);
        l1 -= temp;
        r2 -= temp;
        //cout << temp << endl;
        fav += temp;
        fav += min(l1, r1);

        int unfav = fav + 1;

        cout << ans1 << " " << unfav << endl;
    }
}
