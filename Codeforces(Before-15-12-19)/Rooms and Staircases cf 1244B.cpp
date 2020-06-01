#include <bits/stdc++.h>
using namespace std;

int visited[2][1000];
string s[2];
int best = 0;
int len;

void dfs(int r, int c, int l) {
	visited[r][c] = 1;

	if (c >= 1 && visited[r][c - 1] == 0)
		dfs(r, c - 1, l + 1);
	if (c < len - 1 && visited[r][c + 1] == 0)
		dfs(r, c + 1, l + 1);
	if (r == 0 && s[r][c]=='1'&&visited[r + 1][c] == 0)
		dfs(r + 1, c , l + 1);
	if (r == 1 &&s[r][c]=='1'&& visited[r-1][c] == 0)
		dfs(r-1, c , l + 1);

	if (l > best) {
		best = l;
	}
	visited[r][c] = 1;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		
		cin >> len;

		cin >> s[0];
		s[1] = s[0];

		dfs(0, 0, 1);
		int ans1 = best;
		best=0;
		memset(visited, 0, sizeof(visited[0][0]) * 2 * 1000);

		dfs(0, len - 1, 1);
		int ans2 = best;
		best=0;
		memset(visited, 0, sizeof(visited[0][0]) * 2 * 1000);


		cout << max(ans2, ans1) << endl;
	}

	return 0;
}