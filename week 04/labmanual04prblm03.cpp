#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter Array Size: ";
    cin>>n;
    int ara[n];
    cout<<"Enter Data: ";
    for(i=0;i<n;i++)
        cin>>ara[i];

    for(i=1;i<n;i++)
    {
        int x=ara[i];
        j=i;
        while(j>0 && ara[j-1]<ara[j])
        {
            swap(ara[j],ara[j-1]);
            j--;
        }

    }


   cout<<"Descending Order: ";
    for(i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    return 0;
}
