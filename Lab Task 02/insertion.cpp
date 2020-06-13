#include<bits/stdc++.h>
using namespace std;
void insertion(int ara[],int n)
{
    int i,j,x;
    for(i=0;i<n;i++)
    {
        x=ara[i];
        j=i-1;
        while(j>=0 && ara[j]>x)
            ara[j+1]=ara[j],j--;
        ara[j+1]=x;
    }
}
int main()
{
    int ara[]={5,1,4,2,8};
    int n=sizeof(ara)/sizeof(ara[0]);
    cout<<"Element before sorting: ";
    for(int i=0;i<n;i++) cout<<ara[i]<<' ';
    insertion(ara,n);
    cout<<endl<<"Element before sorting: ";
    for(int i=0;i<n;i++) cout<<ara[i]<<' ';
    return 0;
}
