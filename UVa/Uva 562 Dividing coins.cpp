#include<bits/stdc++.h>
using namespace std;
int knapSack(int W, int val[], int n)
{
    int i, w;
    int K[n+1][W+1];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (val[i-1]<= w)
                K[i][w] = max(val[i-1] + K[i-1][w-val[i-1]], K[i-1][w]);
            else
               K[i][w] = K[i-1][w];
        }
    }
    return K[n][W];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,sum=0;
        cin>>m;
        int val[m];
        for(int i=0; i<m; i++)
        {
            cin>>val[i];
            sum+=val[i];
        }
        int W=sum/2;
        int ans= knapSack(W, val, m);
        cout<<sum-2*ans<<endl;
    }
    return 0;
}
