#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int temp = k - 2;
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        map<int, int> peak;
        set<int> s;
        vector<int> vec;
        for (int i = 1; i < n - 1; i++)
        {
            peak[i] = peak[i - 1];
            if (ara[i] > ara[i - 1] && ara[i] > ara[i + 1])
            {
                peak[i]++;
                vec.push_back(i);
                s.insert(i);
            }
        }
        int high = 0;
        int left = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            int index = vec[i];

            int tleft = max(0, index - temp);
            auto it = s.lower_bound(tleft + 1);
            int lindex = *it;
            int thigh = peak[index] - peak[lindex] + 1;
            //cout << tleft << " " << lindex << " " << thigh << " " << index << endl;
            if (thigh > high)
            {
                high = thigh;
                left = tleft;
               // cout << high << endl;
            }
        }
        cout << high + 1 << " " << left + 1 << endl;
    }
}
