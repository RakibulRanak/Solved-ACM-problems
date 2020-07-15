#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x) {
		i *= 2; count++;
	}
	return count;
}


void solve(ll cs) {
	string s;
	cin >> s;
	int ara[s.size()];
	if (s[0] == '+')
		ara[0] = 1;
	else
		ara[0] = -1;
	//cout << ara[0] << " ";
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == '+')
			ara[i] = ara[i - 1] + 1;
		else
			ara[i] = ara[i - 1] - 1;
		//cout << ara[i] << " ";
	}
	//cout << endl;
	long long sum = 0;
	int flag = -1;
	for (int i = 0; i < s.size(); i++)
	{
		if (ara[i] == flag)
		{
			flag--;
			sum += i + 1;
		}
	}
	cout << sum + s.size() << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}