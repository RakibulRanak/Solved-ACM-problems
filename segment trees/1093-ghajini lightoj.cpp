#include<bits/stdc++.h>
using namespace std;
#define mx 100001
#define inf 1000000000
int arr[mx];
int treemax[mx * 3];
int treemin[mx*3];

void initmax(int node, int b, int e)
{
    if (b == e)
    {
        treemax[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    initmax(Left, b, mid);
    initmax(Right, mid + 1, e);
    treemax[node] = max(treemax[Left],treemax[Right]);
}
void initmin(int node, int b, int e)
{
    if (b == e)
    {
        treemin[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    initmin(Left, b, mid);
    initmin(Right, mid + 1, e);
    treemin[node] = min(treemin[Left],treemin[Right]);
}
int querymax(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return -1; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return treemax[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = querymax(Left, b, mid, i, j);
    int p2 = querymax(Right, mid + 1, e, i, j);
    return max(p1,p2);
}
int querymin(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return inf;
    if (b >= i && e <= j)
        return treemin[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = querymin(Left, b, mid, i, j);
    int p2 = querymin(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

int main()
{

    int n,d,t;
    cin>>t;
    for(int i=1; i<=t;i++)
    {


        cin >> n>>d;
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        initmax(1, 1, n);
        initmin(1, 1, n);
        int max=0;
        for(int i=1;i<=n-d+1;i++)
        {
            int temp1=querymax(1,1,n,i,i+d-1);
            int temp2=querymin(1,1,n,i,i+d-1);
            //cout<<temp1<<" "<<temp2<<endl;
            int temp=temp1-temp2;
            if(temp>max)
                max=temp;
        }
       // memset(treemax,0,3*(n+1));
       // memset(treemin,0,3*(n+1));
        //memset(arr,0,n+1);

        printf("Case %d: %d\n",i,max);

    }
    return 0;
}
