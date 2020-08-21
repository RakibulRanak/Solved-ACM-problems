#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	int ara[3];
	cin >> ara[0] >> ara[1] >> ara[2];
	sort(ara, ara + 3, greater<int>());
	if (ara[0] == ara[1] && ara[1] == ara[2])
	{
		cout << "YES" << endl;
		cout << ara[0] << " " << ara[1] << " " << ara[2] << endl;
	}
	else if (ara[0] == ara[1])
	{
		cout << "YES" << endl;
		cout << ara[0] << " " << ara[2] << " " << 1 << endl;
	}
	else
		cout << "NO" << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}