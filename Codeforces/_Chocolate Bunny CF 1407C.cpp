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

void solve() {
	int n;
	cin >> n;
	int ara[n + 1];
	memset(ara, 0, sizeof(ara));
	int left = 1, right = 2;
	while (right <= n)
	{
		int a, b;
		//cout << left << " " << right << endl;
		cout << "? " << left << " " << right << endl;
		cin >> a;
		cout << "? " << right << " " << left << endl;
		cin >> b;
		//cout << "x " << a << " " << b << endl;

		if (a > b)
		{
			ara[left] = a;
			left = right;
			right++;

		}
		else
		{
			ara[right] = b;
			right++;
		}
	}
	cout << "! ";
	for (int i = 1; i <= n; i++)
	{
		if (ara[i] == 0)
			cout << n << " ";
		else
			cout << ara[i] << " ";
	}
	cout << endl;

}

int main() {
	FastIO; solve();
	return 0;
}