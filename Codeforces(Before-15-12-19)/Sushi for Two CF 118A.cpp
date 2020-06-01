#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp1,temp2,count=1;
    cin>>n;
    cin>>temp1;
    vector<int>vec;
    for(int i=1;i<n;i++)
    {
        cin>>temp2;
        if(temp2==temp1)
            count++;

        if(temp2!=temp1)
        {

            vec.push_back(count);
            temp1=temp2;
            count=1;
        }
        if(i==n-1)
            vec.push_back(count);
    }
    int max_=0,min_;
    for(int i=0;i+1<vec.size();i++)
    {
        min_=min(vec[i],vec[i+1]);
        if(min_>max_)
            max_=min_;
    }
    cout<<2*max_<<endl;
    return 0;
}
