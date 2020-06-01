#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int n, k;
	cin >> n >> k;
	int ara1[n];
	int ara2[n];
	for (int i = 0; i < n; i++)
		cin >> ara1[i];
	for (int i = 0; i < n; i++)
		cin >> ara2[i];
	sort(ara1, ara1 + n);
	sort(ara2, ara2 + n, greater<int>());
	int sum = 0;
	int count = 0;
	int high = ara2[0];
	for (int i = 0; i < n; i++)
	{
		if (count < k && high > ara1[i])
		{
			sum += high;
			ara2[0] = ara1[i];
			count++;
		}
		else
		{
			sum += ara1[i];
		}
		sort(ara2, ara2 + n, greater<int>());
		high = ara2[0];
	}
	cout << sum << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}