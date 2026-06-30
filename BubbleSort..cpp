#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
                flag=true;
            }
        }
        if(!flag)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";

}

/// 22 14 12 18 9
/// best case O(N)
/// Worst case O(N^2)

