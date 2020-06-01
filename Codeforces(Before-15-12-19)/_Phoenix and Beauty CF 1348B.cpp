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
        int myara[n];
        map<int, int> m;
        vector<int> myvec;
        int ara2[10000];

        int dist = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> myara[i];
            if (m[myara[i]] == 0)
            {
                myvec.push_back(myara[i]);
                dist++;
            }
            m[myara[i]]++;
        }
        if (dist > k)
            cout << -1 << endl;

        else
        {
            sort(myvec.begin(), myvec.end());
            int i = 0;
            vector<int> answer;
            int step = 1 + (n - k);
            //here
            while (i < n)
            {
                int hud = 0;
                for (int j = 0; j < dist; j++)
                {
                    int tottald = m[myvec[j]];
                    int tott = (tottald + step - 1) / step;
                    for (int c = 0; c < tott; c++)
                    {
                        if (myara[i] == myvec[j])
                        {

                            i++;
                        }
                        answer.push_back(myvec[j]);
                        hud++;
                    }
                }
                int remain = k - hud;
                for (int xd = 0; xd < remain; xd++)
                {
                    answer.push_back(1);
                }
            }
            //here
            cout << answer.size() << endl;
            for (int i = 0; i < answer.size(); i++)
            {
                cout << answer[i] << " ";
            }
            //here
            cout << endl;
        }
    }
}