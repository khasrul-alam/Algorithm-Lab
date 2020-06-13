#include<bits/stdc++.h>
using namespace std;
void selection_sort(int ara[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ara[i]>ara[j])
                swap(ara[i],ara[j]);
        }
    }
    return;
}
int main()
{
    int ara[]={1,3,2,7,4,12,6},n;
    n=sizeof(ara)/sizeof(ara[0]);
    cout<<"Before: ";
    for(int i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    selection_sort(ara,n);
    cout<<"After: ";
    for(int i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    return 0;
}
