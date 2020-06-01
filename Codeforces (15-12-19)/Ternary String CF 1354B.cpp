#include<bits/stdc++.h>
using namespace std;
#define Fast     ios::sync_with_stdio(0);cin.tie(0);
#define ll long long

#define inf 9e11+9

#define IN(a) scanf("%d",&a)
#define INL(a) scanf("%lld",&a)

int main() {
    Fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, answer = inf;
        string ss;
        cin >> ss;
        int a[3];
        a[0] = 0, a[1] = 0, a[2] = 0;
        for (int i = 0; i < ss.size(); i++) {
            a[ss[i] - '1'] = i + 1;

            if (a[0] == 0 || a[1] == 0 || a[2] == 0) {
                continue;
            }
            else {
                x = min(a[0], min(a[1], a[2]));
                y = max(a[0], max(a[1], a[2]));

                answer = min(answer, y - x + 1);
            }
        }
        if (answer == inf) {
            cout << "0" << endl;
        }
        else cout << answer << endl;
    }
    return 0;
}