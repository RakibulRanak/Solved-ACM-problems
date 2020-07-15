#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
	FastIO; ll t; cin >> t;

	while (t--)
	{
		double a, b, c;
		cin >> a >> b >> c;
		if (a < c)
			cout << 1 << " ";
		else
			cout << -1 << " ";
		if (c / b < a)
			cout << (int) b << endl;
		else
			cout << -1 << endl;;
	}

	return 0;
}