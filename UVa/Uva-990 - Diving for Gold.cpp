#include<bits/stdc++.h>
using namespace std;
int knapSack(int W, int wt[], int val[], int n,vector<int>& vec)
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
    int h=K[n][W];
    int j=W;
    for(int i=n-1; i>=0; i--)
    {
        if(K[i][j]!=h)
        {
            vec.push_back(i+1);

            //i+1 er value val[i];
            h=h-val[i];
            for(int l=W; l>=0; l--)
            {
                if(K[i][l]==h)
                    j=l;
            }

        }
    }


    return K[n][W];
}

int main()
{
    int W;
    bool first=false;
    while(cin>>W)
    {
        int x,n;
        cin>>x>>n;
        int val[n];
        int wt[n];
        for(int i=0; i<n; i++)
        {
            cin>>wt[i]>>val[i];
            wt[i]*=(3*x);
        }
        vector<int>vec;
        if(first)
            cout<<endl;
        cout<<knapSack(W, wt, val, n,vec)<<endl;
        cout<<vec.size()<<endl;
        for(int i=vec.size()-1; i>=0; i--){
            cout<<wt[vec[i]-1]/(3*x)<<" "<<val[vec[i]-1]<<endl;
        }
        first=true;

    }

    return 0;
}

