#include<bits/stdc++.h>
using namespace std;
int araten[10][10]={1,0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 0 ,0 ,0 ,0 ,
0, 0, 0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,
0, 0, 0, 0, 0 ,0 ,0 ,0 ,0 ,1,
0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0 ,0 ,0 ,0 ,0 ,1 ,0 ,
0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0 ,1 ,0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, };
int aranine[9][9]={1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0 ,0 ,0 ,0 ,
0, 0, 0, 0, 0 ,1 ,0 ,0, 0,
0, 0, 0, 0, 0, 0 ,0 ,1 ,0,
0, 1, 0, 0, 0, 0 ,0 ,0 ,0,
0, 0, 0, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0 ,0 ,0 ,0 ,0, 1,
0, 0, 0, 0, 0, 0, 1, 0, 0,
0, 0, 0 ,0 ,1 ,0 ,0, 0, 0 };
int araeight[8][8]={1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 1 ,
0, 0, 0, 0, 0 ,1 ,0, 0,
0, 0, 1, 0, 0 ,0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 0,
0, 1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 0, 0, 0, 0 };
int main()
{
    int n;
    cin>>n;
    int temp=0;
    int pos=1;
    if(n%2==0)
    {
        pos=0;
        temp=1;
    }
    if(n==1)
        cout<<1<<endl;
    else if(n==2||n==3)
        cout<<"Not possible"<<endl;
    else if(n==8)
    {
        for(int i=0;i<8;i++){
            for(int j=0;j<n;j++)
        {
            cout<<araeight[i][j];
            if(j!=7)
                cout<<" ";
        }
        cout<<endl;
        }
    }
    else if(n==9)
    {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
        {
            cout<<aranine[i][j];
            if(j!=8)
                cout<<" ";
        }
        cout<<endl;
        }
    }
    else if(n==10)
    {
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
        {
            cout<<araten[i][j];
            if(j!=9)
                cout<<" ";
        }
        cout<<endl;
        }
    }

    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==temp)
                {
                    cout<<1;


                }
                else
                  cout<<0;
                if(j!=n-1)
                        cout<<" ";
            }
            if(temp>=(n-2)){
                temp=pos;
                pos++;

            }
            else
                temp+=2;
            cout<<endl;
        }
    }
    return 0;
}
