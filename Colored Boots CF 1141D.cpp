#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string left,right;
    cin>>left>>right;
    map<char, vector<int> > map1;
    map<char, vector<int> > map2;
    set <char> set1;
    set <char>::iterator it;
    vector<int>qleft;
    vector<int>qright;
    vector<int>Q1;
    vector<int>Q2;
    vector<pair<int,int> >p1;
    int q1=0,q2=0;
    for(int i=0; i<left.size(); i++)
    {
        if(left[i]=='?')
        {
            q1++;
            Q1.push_back(i+1);
        }
        else
            map1[left[i]].push_back(i+1);


        if(right[i]=='?')
        {
            Q2.push_back(i+1);
            q2++;
        }
        else
            map2[right[i]].push_back(i+1);

        set1.insert(left[i]);
        set1.insert(right[i]);
    }

    for(it=set1.begin(); it!=set1.end(); it++)
    {
        char c;
        c=*it;
        int len1,len2;
        len1=map1[c].size();
        len2=map2[c].size();
        int Min=min(len1,len2);
        int Max=max(len1,len2);
        if(c!='?')
        {
            for(int i=0; i<Min; i++)
                p1.push_back(make_pair(map1[c][i],map2[c][i]));

            if(len1>len2)
            {
                for(int j=Min;j<Max;j++)
                    qleft.push_back(map1[c][j]);

            }
            else if(len2>len1)
            {
                for(int j=Min;j<Max;j++)
                    qright.push_back(map2[c][j]);
            }

        }
    }
    int baki1gese=0,baki2gese=0;
    if(q1<=qright.size())
    {
        for(int i=0;i<q1;i++)
            p1.push_back(make_pair(Q1[i],qright[i]));
        baki1gese=q1;
    }
    else if(q1>qright.size())
    {
        for(int i=0;i<qright.size();i++)
        {
            p1.push_back(make_pair(Q1[i],qright[i]));
            baki1gese++;
        }
    }
    if(q2<=qleft.size())
    {
        for(int i=0;i<q2;i++)
            p1.push_back(make_pair(qleft[i],Q2[i]));
        baki2gese=q2;
    }
    else if(q2>qleft.size())
    {
        for(int i=0;i<qleft.size();i++)
        {
            p1.push_back(make_pair(qleft[i],Q2[i]));
            baki2gese++;
        }

    }
    if(q1-baki1gese>0 &&q2-baki2gese>0)
    {
        int x1=q1-baki1gese;
        int x2=q2-baki2gese;
        if(x1>=x2)
        {
            for(int i=0;i<x2;i++)
                p1.push_back(make_pair(Q1[baki1gese+i],Q2[baki2gese+i]));

        }
        else
        {
            for(int i=0;i<x1;i++)
                 p1.push_back(make_pair(Q1[baki1gese+i],Q2[baki2gese+i]));
        }
    }
    cout<<p1.size()<<endl;
    for(int i=0;i<p1.size();i++)
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    return 0;
}
