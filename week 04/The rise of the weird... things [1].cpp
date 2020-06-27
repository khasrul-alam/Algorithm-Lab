#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter Array Size: ";
    cin>>n;
    int ara[n];

    cout<<"Enter Data: ";
    for(i=0; i<n; i++)
    {
        cin>>ara[i];

    }

    for(i=1; i<n; i++)
    {
        int x=ara[i];
        j=i;
        while(j>0 && ara[j-1]>x)
        {
            ara[j]=ara[j-1];
            j--;
        }
        ara[j]=x;
    }


    int sum=0;
    for(i=0; i<n; i++)
        if(ara[i]%2==0)
        {
            cout<<ara[i]<<' ';
            sum+=ara[i];
        }
    cout<<sum<<' ';
    sum=0;
    for(i=0; i<n; i++)
        if(ara[i]%2==1)
        {
            cout<<ara[i]<<' ';
            sum+=ara[i];
        }
    cout<<sum;
    return 0;
}
