#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main() {
	FastIO; ll t; cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		if (n == 1)
			cout << 1 << endl;
		else if (n % 2 == 0)
			cout << n / 2 << endl;
		else
			cout << (n - 1) / 2 << endl;
	}

	return 0;
}