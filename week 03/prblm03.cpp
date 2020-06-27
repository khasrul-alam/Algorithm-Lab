#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum=0,n;
    cin>>n;
    int ara[n],ind[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        ind[i]=i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap(ara[j],ara[j+1]);
                swap(ind[j],ind[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    for(i=0;i<n;i++)
        cout<<ind[i]<<' ';
    cout<<endl;
    return 0;
}
