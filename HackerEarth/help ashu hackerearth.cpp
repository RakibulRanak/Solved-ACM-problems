#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx];
int treeeven[mx * 4];
void initeven(int node, int b, int e)
{
    if (b == e) {
        if(arr[b]%2==0)
            treeeven[node] = 1;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    initeven(Left, b, mid);
    initeven(Right, mid + 1, e);
    treeeven[node] = treeeven[Left] + treeeven[Right];
}

int queryeven(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return treeeven[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = queryeven(Left, b, mid, i, j);
    int p2 = queryeven(Right, mid + 1, e, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}
void updateeven(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i) { //রিলেভেন্ট সেগমেন্ট
        treeeven[node] = newvalue;
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    updateeven(Left, b, mid, i, newvalue);
    updateeven(Right, mid + 1, e, i, newvalue);
    treeeven[node] = treeeven[Left] + treeeven[Right];
}
int main()
{

    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
            cin>>arr[i];

    initeven(1, 1, n);
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==0){
            if(arr[y]%2==1&&z%2==0)
                updateeven(1,1,n,y,1);
            else if(arr[y]%2==0&&z%2==1)
                updateeven(1,1,n,y,0);
            arr[y]=z;
        }
        if(z==0)
            z=1;
        if(z>n)
            z=n;
        if(y>z)
        swap(y,z);

        if(x==1)
        {
           cout<< queryeven(1, 1, n, y, z)<<endl;
        }
        else if(x==2)
        {
            cout<<(z-y+1)-queryeven(1,1,n,y,z)<<endl;
        }
    }
    return 0;

}

