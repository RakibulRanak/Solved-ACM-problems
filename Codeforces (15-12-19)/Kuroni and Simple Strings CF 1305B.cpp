#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            left.push_back(i + 1);
        else
            right.push_back(i + 1);
    }

    reverse(left.begin(), left.end());

    vector<int> ans;
    while (left.size() != 0 && right.size() != 0 && left.back() < right.back())
    {
        ans.push_back(left.back());
        ans.push_back(right.back());
        left.pop_back(), right.pop_back();
    }
    sort(ans.begin(), ans.end());
    if (ans.size() == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
        cout << ans.size() << "\n";
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
