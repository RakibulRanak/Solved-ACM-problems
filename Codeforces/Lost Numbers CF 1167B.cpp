#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    int ara[6]= {4, 8, 15, 16, 23, 42};
    int ara1[6];
    int a,b,ans,val1,val2,val3,val4;
    cout<<"? "<<1<<" "<<2<<endl<<flush;
    cin>>ans;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(ara[i]*ara[j]==ans)
            {
                val1=ara[i];
                val2=ara[j];
                // cout<<val1<<" "<<val2<<endl;
                break;
            }
        }
    }
    cout<<"? "<<2<<" "<<3<<endl<<flush;
    cin>>ans;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(ara[i]*ara[j]==ans)
            {
                val3=ara[i];
                val4=ara[j];
                //cout<<val3<<" "<<val4<<endl;
                break;
            }
        }
    }
    if(val1 ==val3 ||val1==val4)
    {
        ara1[1]=val1;
        ara1[0]=val2;
        if(val3!=val1)
            ara1[2]=val3;
        else
            ara1[2]=val4;
    }
    else
    {
        ara1[1]=val2;
        ara1[0]=val1;
        if(val3!=val2)
            ara1[2]=val3;
        else
            ara1[2]=val4;
    }
    cout<<"? "<<4<<" "<<5<<endl<<flush;
    cin>>ans;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(ara[i]*ara[j]==ans)
            {
                val1=ara[i];
                val2=ara[j];
//cout<<val1<<" "<<val2<<endl;
                break;
            }
        }
    }
    cout<<"? "<<5<<" "<<6<<endl<<flush;
    cin>>ans;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(ara[i]*ara[j]==ans)
            {
                val3=ara[i];
                val4=ara[j];
                // cout<<val3<<" "<<val4<<endl;
                break;
            }
        }
    }
    if(val1 ==val3 ||val1==val4)
    {
        ara1[4]=val1;
        ara1[3]=val2;
        if(val3!=val1)
            ara1[5]=val3;
        else
            ara1[5]=val4;
    }
    else
    {
        ara1[4]=val2;
        ara1[3]=val1;
        if(val3!=val2)
            ara1[5]=val3;
        else
            ara1[5]=val4;
    }
    cout<<"! "<<ara1[0]<<" "<<ara1[1]<<" "<<ara1[2]<<" "<<ara1[3]<<" "<<ara1[4]<<" "<<ara1[5]<<endl<<flush;
    return 0;

}
//32 120 368 966
