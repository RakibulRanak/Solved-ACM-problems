#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
long long int tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
long long int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    long long int p1 = query(Left, b, mid, i, j);
    long long int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i)   //রিলেভেন্ট সেগমেন্ট
    {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{

    int n,t,que;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        scanf("%d %d",&n,&que);
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        init(1, 1, n);
        for(int i=0;i<que;i++)
        {
            int temp;
            scanf("%d",&temp);
            if(temp==1)
            {
               int t1;
               scanf("%d",&t1);
               printf("%d\n",arr[t1+1]);
               update(1,1,n,t1+1,0);
               arr[t1+1]=0;
            }
            else if(temp==2)
            {
                int t2,t3;
                scanf("%d %d",&t2,&t3);
                arr[t2+1]+=t3;
                update(1,1,n,t2+1,arr[t2+1]);
            }
            else
            {
                int t4,t5;
                scanf("%d %d",&t4,&t5);
                printf("%lld\n",query(1,1,n,t4+1,t5+1));
            }
        }
        memset(arr,0,n+1);
        memset(tree,0,3*(n+1));
    }
    return 0;
}
