#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	ll n, k;
	cin >> n >> k;
	ll ara1[n], ara2[k];
	for (int i = 0; i < n; i++)
		cin >> ara1[i];
	for (int i = 0; i < k; i++)
		cin >> ara2[i];
	sort(ara1, ara1 + n);
	sort(ara2, ara2 + k, greater<ll>());
	ll sum = 0;
	int i = 0, j = k - 1 , l = n - 1;
	while (ara2[j] == 1)
	{
		sum += ara1[l] * 2;
		l--;
		j--;
	}
	j = 0;
	while (i <= l)
	{
		ll beshi = ara1[l];
		ll kom = ara1[i];
		//cout << beshi << " " << kom << endl;
		sum += beshi + kom;
		l --;
		i += ara2[j] - 1;
		j++;
	}
	cout << sum << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}