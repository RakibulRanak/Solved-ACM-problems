#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	int n;
	cin >> n;
	string s1 = "", s2 = "";
	for (int j = 0; j < 55; j++)
		s1 += 'a';
	cout << s1 << endl;
	for (int i = 0; i < n; i++)
	{
		int h;
		cin >> h;
		for (int j = 0; j < h; j++) {
			s2 += s1[j];
		}
		int temp = s1[h];
		temp++;
		temp %= 123;
		if (temp < 97)
			temp += 97;
		s2 += (char)temp;
		for (int j = h + 1; j < 55; j++)
			s2 += 'a';
		cout << s2 << endl;
		s1 = s2;
		s2 = "";
	}

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}