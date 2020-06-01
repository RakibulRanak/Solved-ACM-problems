#include<bits/stdc++.h>
using namespace std;
#define Fast     ios::sync_with_stdio(0);cin.tie(0);
#define ll long long

#define IN(a) scanf("%d",&a)
#define INL(a) scanf("%lld",&a)


int main() {
    Fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, c, b, d, answer = 0;
        cin >> a >> b >> c >> d;


        if (a <= b) {
            cout << b << endl;
        }
        else if (c <= d) {
            cout << "-1" << endl;
        }
        else {
            answer = b;
            a -= b;
            ll x = c - d;
            if (a % x == 0) {
                x = (a / x) * c;
            }
            else {
                x = (a / x + 1) * c;
            }
            answer += x;
            cout << answer << endl;
        }
    }
    return 0;
}