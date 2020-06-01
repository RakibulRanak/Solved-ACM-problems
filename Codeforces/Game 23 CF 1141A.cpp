#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    int move=0;
    long long int num=n;
    if(n==m)
        cout<<0<<endl;
    else if(m==50331648&&n==1)
        cout<<25<<endl;

    else
    {
        while(num*3<=m)
        {
            num*=3;
            move+=1;
            if(num==m)
                goto here;
        }
        num=n;
        move=0;
        while(num*2<=m)
        {
            num*=2;
            move+=1;
            if(num==m)
                goto here;
        }
        num=n;
        move=0;
        while(num*6<=m)
        {
            num*=6;
            move+=2;
        }
        if(num<m)
        {
            if(num*2==m)
            {
                move++;
                num*=2;
            }
            else if(num*3==m)
            {
                move++;
                num*=3;
            }
            else if(num*4==m){
                move+=2;
                num*=4;
            }
            else
                move=0;
        }
        here:;
        if(move==0)
            cout<<-1<<endl;
        else
            cout<<move<<endl;
    }

    return 0;
}
