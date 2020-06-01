#include <bits/stdc++.h>
using namespace std;

//i liked the solution,great!!

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	vector<set<int>> poss(26);
	for (int i = 0; i < int(s.size()); ++i) {
		poss[s[i] - 'a'].insert(i);
	}
/*	for(int i=0;i<26;i++)
	{	
		cout<<i<<" : ";
		for(auto it=poss[i].begin();it!=poss[i].end();it++)
			cout<<*it<<" ";
		cout<<endl;
	}*/
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int tp;
		cin >> tp;
		if (tp == 1) {
			int pos;
			char c;
			cin >> pos >> c;
			--pos;
			poss[s[pos] - 'a'].erase(pos);
			s[pos] = c;
			poss[s[pos] - 'a'].insert(pos);
		} else {
			int l, r;
			cin >> l >> r;
			--l, --r;
			int cnt = 0;
			for (int c = 0; c < 26; ++c) {
				auto it = poss[c].lower_bound(l);
				if (it != poss[c].end() && *it <= r) ++cnt;
			}
			cout << cnt << endl;
		}
	}
	
	return 0;
}