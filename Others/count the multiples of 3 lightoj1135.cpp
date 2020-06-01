#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define i64 long long int
int arr[mx];

struct info
{
    i64 one,two,three,prop;
} tree[mx * 4];

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].one=0;
        tree[node].two=0;
        tree[node].three=1;
        tree[node].prop=0;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].one = 0;
    tree[node].two = 0;
    tree[node].three = tree[Left].three + tree[Right].three;
    tree[node].prop=0;
}

void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        int tmp1=tree[node].one;
        tree[node].one=tree[node].three;
        tree[node].three=tree[node].two;
        tree[node].two=tmp1;
        tree[node].prop++;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j);
    update(Right, mid + 1, e, i, j);
    tree[node].two = tree[Left].two + tree[Right].two;
    tree[node].one = tree[Left].one+tree[Right].one;
    tree[node].three=tree[Left].three+tree[Right].three;
    if(tree[node].prop%3==2)
    {
        int tmp=tree[node].three;
        tree[node].three=tree[node].one;
        tree[node].one=tree[node].two;
        tree[node].two=tmp;
    }
    else if(tree[node].prop%3==1)
    {
        int tmp=tree[node].three;
        tree[node].three=tree[node].two;
        tree[node].two=tree[node].one;
        tree[node].one=tmp;
    }

}
int query(int node, int b, int e, int i, int j,int carry=0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        if(carry%3==0)
            return tree[node].three;
        else if(carry %3==1)
            return tree[node].two;
        else
            return tree[node].one;

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j,carry+tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j,carry+tree[node].prop);

    return p1 + p2;
}

int main()
{

    int n,q,temp,a,b;
    int c;
    cin>>c;
    for(int y=1; y<=c; y++)
    {
        cin >> n>>q;
        cout<<"Case "<<y<<":"<<endl;
        init(1, 1, n);
        for(int i=0; i<q; i++)
        {
            cin>>temp>>a>>b;
            if(temp==0)
                update(1,1,n,a+1,b+1);

            else
                cout<<query(1,1,n,a+1,b+1)<<endl;

        }
    }
    return 0;
}
