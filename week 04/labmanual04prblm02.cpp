#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int ara[n];
    cout<<"Enter Data: ";
    for(i=0;i<n;i++)
        cin>>ara[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ara[j]>ara[j+1])
                swap(ara[j],ara[j+1]);
        }
    }
   cout<<"Ascending Order: ";
    for(i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    return 0;
}
