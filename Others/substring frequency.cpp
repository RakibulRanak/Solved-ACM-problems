
#include <bits/stdc++.h>
using namespace std;
int num=0;

void computeLPSArray(string pat, int M, int* lps);

void KMPSearch(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            num++;
            j = lps[j - 1];
        }

        else if (i < N && pat[j] != txt[i])
        {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

void computeLPSArray(string pat, int M, int* lps)
{

    int len = 0;

    lps[0] = 0;

    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0)
            {
                len = lps[len - 1];

            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}


int main()
{
    int k;
    cin>>k;
    for(int i=0; i<k; i++)
    {
        string txt;

        string pat;
        cin>>txt>>pat;
        KMPSearch(pat, txt);
        cout<<"Case "<<i+1<<": "<<num<<endl;
        num=0;


    }
    return 0;
}


