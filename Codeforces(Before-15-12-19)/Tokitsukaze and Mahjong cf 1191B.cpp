#include <bits/stdc++.h>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b, c;
	cin >> a >> b >> c;
	int dig[3] = {(int)a[0] - 48, (int)b[0] - 48, (int)c[0] - 48};
	int digg[3] = {(int)a[0] - 48, (int)b[0] - 48, (int)c[0] - 48};
	char cc[3] = {a[1], b[1], c[1]};

	sort(dig, dig + 3);
	int ans = 2;
	
	if (dig[0] == dig[2] && cc[0] == cc[1]&&cc[1]==cc[2])
	{
		cout << 0 << endl;
		return 0;
	}
	if (dig[0]+1 ==dig[1]&&dig[1]+1==dig[2] && cc[0] == cc[1]&&cc[1]==cc[2])
	{
		cout << 0 << endl;
		return 0;
	}

	if (abs(digg[0] - digg[1]) <=2 && cc[0] == cc[1])
		ans = 1;
	if (abs(digg[0] - digg[2]) <=2 && cc[0] == cc[2])
		ans = 1;
	if (abs(digg[1] - digg[2]) <= 2 && cc[1] == cc[2])
	 	ans = 1;

	cout<<ans<<endl;

}