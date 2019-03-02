#include<bits/stdc++.h>
using namespace std;
int ara[1000005];

int binarysearch(int arr[], int key, int n)
{
    int left = 1, right = n;

    int mid;
    while (left < right)
    {

        mid = left + (right-left)/2;
        // Check if key is present in array
        if(right-left==1)
        {
            if(arr[right]<key)
                return right;
            else if(arr[left]<key)
                return left;
            else
                return left-1;
        }

        if (arr[mid] == key)
        {
            // If duplicates are present it returns
            // the position of last element
            while (mid>0 && arr[mid]== key)
                 mid--;
            return mid;
            break;
       }

        // If key is smaller, ignore right half
        else if (arr[mid] > key)
            right = mid-1;

        // If key is greater, ignore left half
        else
            left = mid ;
    }

//    while (mid > -1 && arr[mid] > key)
//        mid--;
    return mid ;
}

int main()
{
    int n;
    cin>>n;

    //cout<<ara[5]<<endl;
    int m;
    cin>>m;
    int temp1,temp2;
    for(int i=0; i<m; i++)
    {
        cin>>temp1>>temp2;
        ara[temp1]++;
        ara[temp2+1]--;
    }
    for(int i=1; i<=n; i++)
    {
        ara[i]+=ara[i-1];
        //cout<<ara[i]<<" ";
    }
    //cout<<endl;
ara[n+1]=-100;
    sort(ara, ara+n+1);
//    for(int i=0; i<n+2; i++)
//    {
//        cout<<ara[i]<<" ";
//    }
   // cout<<endl;
    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        int value;
        cin>>value;
        int x=binarysearch(ara,value,n);
        x=n-x;
        cout<<x<<endl;
    }
}
