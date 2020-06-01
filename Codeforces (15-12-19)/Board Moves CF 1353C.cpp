#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<int, ll>m;

void solve(ll cs) {
	int f;
	cin >> f;
	cout << m[f] << endl;
}

int main() {
	FastIO; ll t;
	ll sum = 0;
	m[1] = 0;
	ll count = 1;
	ll step;
	for (int i = 3; i < 500000; i += 2)
	{
		step = count * 8;
		sum += step * count;
		m[i] = sum;
		//cout << m[i] << endl;
		count++;
	}

	cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}