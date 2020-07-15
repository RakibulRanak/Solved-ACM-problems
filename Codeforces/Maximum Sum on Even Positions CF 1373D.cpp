#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll maxSubArraySum(vector<ll>a, int size)
{
	ll max_so_far = a[0];
	ll curr_max = a[0];

	for (int i = 1; i < size; i++)
	{
		curr_max = max(a[i], curr_max + a[i]);
		max_so_far = max(max_so_far, curr_max);
	}
	return max_so_far;
}


void solve(ll cs) {
	int n;
	cin >> n;
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	vector<ll>vec1, vec2;
	ll ans = 0;
	ll sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0) {
			vec1.push_back(ara[i + 1] - ara[i]);
			sum += ara[i];
		}
		else
			vec2.push_back(ara[i] - ara[i + 1]);
		//ans = max(ans, vec[i]);



	}
	if (n % 2 == 1)
		sum += ara[n - 1];
	if (n > 1) {
		ans = maxSubArraySum(vec1, vec1.size());
		if (n > 2)
			ans = max(ans, maxSubArraySum(vec2, vec2.size()));
	}
	if (ans < 0)
		ans = 0;
	//cout << sum << endl;
	cout << ans + sum << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}