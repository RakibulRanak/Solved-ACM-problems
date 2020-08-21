#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve() {
	int n;
	cin >> n;
	map<int, int>m;
	int has8 = 0;
	int has6 = 0;
	int has4 = 0;
	int has2 = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		m[temp]++;
		if (m[temp] == 8) {
			has8++;
			has6--;
		}
		else if (m[temp] == 6) {
			has6++;
			has4--;
		}
		else if (m[temp] == 4) {
			has4++;
			has2--;
		}
		else if (m[temp] == 2)
			has2++;

	}
	int test;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		char x ;
		int temp;
		cin >> x >> temp;
		if (x == '+')
		{
			m[temp]++;
			if (m[temp] == 8) {
				has8++;
				has6--;
			}
			else if (m[temp] == 6) {
				has6++;
				has4--;
			}
			else if (m[temp] == 4) {
				has4++;
				has2--;
			}
			else if (m[temp] == 2)
				has2++;
		}
		else
		{
			m[temp]--;
			if (m[temp] == 7) {
				has8--;
				has6++;
			}
			else if (m[temp] == 5 ) {
				has6--;
				has4++;
			}
			else if (m[temp] == 3) {
				has4--;
				has2++;
			}
			else if (m[temp] == 1)
				has2--;
		}
		//cout << has8 << " " << has6 << " " << has4 << " " << has2 << endl;
		int case2 = 0, case4 = 0, case6 = 0, case8 = 0;
		case8 = has8;
		case6 = has6 + case8;
		case4 = has4 + case6;
		case2 = has2 + case4;
		//cout << case8 << " " << case6 << " " << case4 << " " << case2 << endl;
		if (case8)
			cout << "YES" << endl;
		else if (has6 && case2 - has6)
			cout << "YES" << endl;
		else if (case4 >= 2)
			cout << "YES" << endl;
		else if (case4 && (has2 >= 2))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}


}


int main() {
	FastIO; solve();
	return 0;
}