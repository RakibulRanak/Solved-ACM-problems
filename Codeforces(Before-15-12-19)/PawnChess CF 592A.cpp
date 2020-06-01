#include<bits/stdc++.h>
using namespace std;
char ara[8][8];
int main()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>ara[i][j];
        }
    }
    int k;
    int ansa=0,ansb;
    bool b=false;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(ara[i][j]=='W')
            {
                for( k=i-1;k>=0;k--)
                {
                    if(ara[k][j]!='.')
                        break;

                }
                if(k==-1)
                {
                    ansa=i;
                    b=true;
                    break;

                }
            }
        }
        if(b)
            break;
    }
    b=false;
    for(int i=7;i>=0;i--)
    {
        for(int j=7;j>=0;j--)
        {
            if(ara[i][j]=='B')
            {
                for( k=i+1;k<=7;k++)
                {
                    if(ara[k][j]!='.')
                        break;

                }
                if(k==8)
                {
                    ansb=8-(i+1);
                    b=true;
                    break;

                }
            }
        }
        if(b)
            break;
    }
    if(ansa<=ansb)
        cout<<"A"<<endl;
    else if(ansb<ansa)
        cout<<"B"<<endl;
    return 0;

}
