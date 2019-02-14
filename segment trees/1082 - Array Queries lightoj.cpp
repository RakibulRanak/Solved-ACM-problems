#include<bits/stdc++.h>
using namespace std;
#define mx 100007
#define inf 1000000
int arr[mx];
int tree[mx * 4];

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
    tree[node] = min(tree[Left],tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return inf;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2);
}
int main()
{
    int c;
    scanf("%d",&c);
    for(int i=1; i<=c; i++)
    {


        int n,q;
        scanf("%d %d",&n,&q);
        for(int j=1; j<=n; j++)
            scanf("%d",& arr[j]);
        init(1, 1, n);
        int x,y;
            cout<<"Case "<<i<<" :"<<endl;
        for(int j=1;j<=q;j++){
            scanf("%d %d",&x,&y);
            printf("%d\n",query(1, 1, n, x, y) );

        }
        //memset(arr,0,n+1);
       // memset(tree,0,3*n+3);

    }
    return 0;
}
