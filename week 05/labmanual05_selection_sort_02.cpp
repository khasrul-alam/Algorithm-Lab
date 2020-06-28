#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,Min,x,t;
    cout<<"Enter the number of element: ";
    cin>>n;
    int ara[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    cout<<"Enter t: ";
    cin>>t;
    int cnt=0;
    for(i=0; i<t; i++)
    {
        Min=i;
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<ara[Min])
            {
                Min=j;
            }
        }

            swap(ara[i],ara[Min]);

    }

    cout<<"Sorted Data : ";
    for(i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;

    return 0;
}
