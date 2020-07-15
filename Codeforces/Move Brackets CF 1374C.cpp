#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	string s;
	int n;
	cin >> n >> s;
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
			sum += 1;
		else
			sum -= 1;
		ans = min(ans, sum);
	}
	//int ans = 0;

	cout << abs(ans) << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}