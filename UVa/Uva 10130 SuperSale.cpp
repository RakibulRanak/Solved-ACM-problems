#include<bits/stdc++.h>
using namespace std;


int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n+1][W+1];

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
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
        int n;
        cin>>n;
        int val[n];
        int wt[n];
        for(int i=0; i<n; i++)
        {
            cin>>val[i]>>wt[i];
        }
        int m;
        cin>>m;
        int sum=0,W;
        for(int i=0; i<m; i++)
        {
            cin>>W;
            sum+=knapSack(W, wt, val, n);
        }
        cout<<sum<<endl;
    }
    return 0;
}

