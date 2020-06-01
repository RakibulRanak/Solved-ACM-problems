#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int n, m, k;
	cin >> n >> m >> k;
	int every = n / k;
	int hp = min(every, m);
	int bakim = m - hp;
	//cout << " " << bakim << endl;

	if (bakim == 0)
	{
		cout << hp << endl;
	}
	else
	{
		int every2 = (bakim + (k - 2)) / (k - 1);
		cout << hp - every2 << endl;
	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}