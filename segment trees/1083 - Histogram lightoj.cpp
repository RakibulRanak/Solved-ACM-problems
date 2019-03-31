#include<bits/stdc++.h>
using namespace std;

int getmaxarea(int ara[],int x)
{
    stack<int>s;
    int max_area=0;
    int area_with_top;
    int i=0;
    int top;
    while(i<x)
    {
        if(s.empty()||ara[s.top()]<=ara[i])
        {
            s.push(i);
            i++;
        }
        else
        {
            top=s.top();
            s.pop();
            area_with_top=ara[top]*(s.empty()? i:i-s.top()-1);
            if(max_area<area_with_top)
                max_area=area_with_top;
        }
    }
    while(!s.empty())
    {
        top=s.top();
        s.pop();
        area_with_top=ara[top]*(s.empty()? i:i-s.top()-1);
        if(max_area<area_with_top)
            max_area=area_with_top;
    }
    return max_area;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        int ara[x];
        for(int i=0; i<x; i++)
            scanf("%d",&ara[i]);
        int ans=getmaxarea(ara,x);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
