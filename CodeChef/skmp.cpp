#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	string s1, s2, s3 = "";
	cin >> s1 >> s2;
	map<char, int>m;
	for (int i = 0; i < s1.size(); i++)
	{
		m[s1[i]]++;
	}
	for ( int i = 0; i < s2.size(); i++)
	{
		m[s2[i]]--;
	}
	string ans = s2;
	string prev = "", after = "";
	char first = ans[0];
	bool kahini = false;

	for (char x = 'a'; x <= 'z'; x++)
	{
		for (int j = 0; j < m[x]; j++) {
			s3 += x;
		}
	}
	int br = false;
	for (int i = 0; i < s3.size(); i++)
	{
		if (s3[i] == first)
		{
			//cout << "HI " << i << endl;
			for (int j = 1; j < ans.size(); j++)
			{
				//cout << ans[j] << " " << s3[i + j] << endl;
				if (ans[j] < s3[i + j] ) {
					kahini = true;
					br = true;
					break;
				}
				else if (ans[j] > s3[i + j] ) {
					//kahini = true;
					br = true;
					break;
				}

			}

			break;
		}
	}
	//cout << kahini << endl;

	//cout << s3 << endl;
	int i = 0;
	if (!kahini) {
		while (s3[i] <= first && i < s3.size()) {
			prev += s3[i];
			i++;
		}
		while (i < s3.size()) {
			after += s3[i];
			i++;
		}
	}
	else {

		while (s3[i] < first && i < s3.size()) {
			prev += s3[i];
			i++;
		}
		while (i < s3.size()) {
			after += s3[i];
			i++;
		}
	}
	//cout << prev << endl;
	//cout << s3 << endl;
	ans = prev + ans + after;
	cout << ans << endl;
}


int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}