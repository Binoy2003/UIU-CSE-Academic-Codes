#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={10,2,6,15,4};
    int i,j,n=5,index_min;
    for(i=0;i<n-1;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[j]<ar[index_min])
                index_min=j;
        }
        if(index_min!=i)
            swap(ar[i],ar[index_min]);
    }
    for(j=0;j<n;j++)
        cout<<ar[j]<<" ";

}
