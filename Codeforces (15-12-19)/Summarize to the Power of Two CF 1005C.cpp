#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int power[30];
    long long temp = 1;
    for (int i = 0; i <= 29; i++)
    {
        temp *= 2;
        power[i] = temp;
        //cout << temp << endl;
    }
    long long ara[n];
    map<long long, long long> m, used;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        m[ara[i]]++;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        long long number = ara[i];
        if (used[number] != 0)
            continue;
        bool paise = false;
        for (int j = 0; j < 30; j++)
        {
            if (power[j] <= number)
                continue;
            else
            {
                long long need = power[j] - number;
                if (need == number)
                {
                    if (m[need] > 1)
                    {
                        used[number] = 1;
                        paise = true;
                        break;
                    }
                }
                else if (m[need] != 0)
                {
                    used[number] = 1;
                    paise = true;
                    break;
                }
            }
        }
        if (!paise)
            total++;
    }
    cout << total << endl;
}