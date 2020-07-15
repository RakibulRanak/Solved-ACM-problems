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
		if (n % 4 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}