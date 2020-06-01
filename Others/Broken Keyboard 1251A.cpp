#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int>m;
        for (int i = 0; i < s.size(); i++)
            m[s[i]]++;
 
        char a = 'a';
 
        for (int i = 0; i < 26; i++)
        {
            if (m[a] == 0)
            {
                a++;
                continue;
            }
            else if (m[a] % 2 == 1)
            {
                cout << a;
            }
            else
            {
                int j = 0;
                while (j < s.size())
                {
                    if (s[j] == a)
                    {
                        int x = j;
                        int count = 0;
                        while (x < s.size())
                        {
                            if (s[x] == a) {
                                count++;
                                x++;
                            }
                            else
                                break;
 
                        }
                        j = x;
                        if (count % 2 == 1) {
                            cout << a;
                            break;
                        }
                        count = 0;
                    }
                    j++;
                }
            }
            a++;
        }
        cout << endl;
 
 
    }
 
    return 0;
 
 
}