#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll dp[201][201][201];
ll red[201];
ll green[201];
ll blue[201];

ll maxi(ll r, ll g, ll b)
{
	if (!(r | g) || !(r | b) || !(g | b)) return 0;
	if (dp[r][g][b]) return dp[r][g][b];
	ll x = 0, y = 0, z = 0;
	if (r && g ) x = red[r] * green[g] + maxi(r - 1, g - 1, b);
	if (r && b ) y = red[r] * blue[b] + maxi(r - 1, g , b - 1);
	if (g && b ) z = green[g] * blue[b] + maxi(r , g - 1, b - 1);
	dp[r][g][b] = max({x, y, z});
	return dp[r][g][b];

}


int main() {
	FastIO;

	ll r, g, b;
	cin >> r >> g >> b;
	for (ll i = 1; i <= r; i++)
		cin >> red[i];
	for (ll i = 1; i <= g; i++)
		cin >> green[i];
	for (ll i = 1; i <= b; i++)
		cin >> blue[i];

	sort(red + 1, red + r + 1);
	sort(green + 1, green + g + 1);
	sort(blue + 1, blue + b + 1);

	cout << maxi(r, g, b) << endl;



	return 0;
}