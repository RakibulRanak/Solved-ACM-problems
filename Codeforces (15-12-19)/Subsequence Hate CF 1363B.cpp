#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	string s;
	cin >> s;
	int len = s.size();
	int ooo = 0, zzz = 0;
	map<int, int>one, zero;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '1')
			ooo++;
		else
			zzz++;
		one[i] = ooo;
		zero[i] = zzz;
	}
	int ans = min(ooo, zzz);
	int minone = 100000;
	int minzero = 100000;
	for (int i = 0; i < len; i++)
	{
		int tillzero = zero[i];
		int tillone = one[i];
		int bakizero = zzz - tillzero;
		int bakione = ooo - tillone;


		minzero = min (minzero, (tillone + bakizero));
		minone = min(minone, (tillzero + bakione));
	}

	ans = min(ans, minzero);
	ans = min(ans, minone);
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}