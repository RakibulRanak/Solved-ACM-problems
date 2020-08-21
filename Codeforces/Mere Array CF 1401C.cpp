#include<bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int ara1[n];
		int myara[n];
		for (int i = 0; i < n; i++) {
			cin >> ara1[i];
			myara[i] = ara1[i];
		}
		bool ans1 = 1;
		sort(myara, myara + n);
		//
		for (int i = 0; i < n; i++) {
			if (myara[i] != ara1[i])
			{
				if (ara1[i] % myara[0] != 0)
					ans1 = 0;
			}
		}
		if (ans1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}