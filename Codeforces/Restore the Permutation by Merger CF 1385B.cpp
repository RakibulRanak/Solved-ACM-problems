#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	int n;
	cin >> n;
	int ara[2 * n];
	for (int i = 0; i < 2 * n; i++)
		cin >> ara[i];
	map<int, int>m;
	int i = 0;
	vector<int>vec;
	while (vec.size() != n)
	{
		if (m[ara[i]] == 0) {
			vec.push_back(ara[i]);
			m[ara[i]] = 1;
		}
		i++;
	}
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}