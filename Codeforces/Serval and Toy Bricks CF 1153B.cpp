#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h;
    cin>>n>>m>>h;
    int lomba[n];
    int pash[m];
    for(int i=0; i<m; i++)
        cin>>pash[i];
    for(int i=0; i<n; i++)
        cin>>lomba[i];
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>temp;
            if(temp==1)
            {

                if(pash[j]>=lomba[i])
                {

                    cout<<lomba[i]<<" ";
                    fflush(stdout);

                }
                else
                {
                    cout<<pash[j]<<" ";
                    fflush(stdout);

                }
            }
            else
            {
                printf("%d ",0);
                fflush(stdout);
            }
        }
        cout<<endl;
    }

    return 0;

}

