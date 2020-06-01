#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4]={65,67,84,71};
    string s;
    int x;
    cin>>x;
    cin>>s;
    int min_=100000,temp=0,t1,t2;
    for(int i=0;i<s.size()-3;i++)
    {
        int k=0;
        for(int j=i;j<i+4;j++)
        {

            if(s[j]>=ara[k]){
                t1=s[j]-ara[k];
                t2=ara[k]+26-s[j];
                temp+=min(t1,t2);
            }
            else{
                t1=ara[k]-s[j];
                t2=s[j]+26-ara[k];
                temp+=min(t1,t2);
            }
            k++;
        }
        if(temp<min_)
            min_=temp;
        temp=0;
        k=0;
    }
    cout<<min_<<endl;
    return 0;
}
