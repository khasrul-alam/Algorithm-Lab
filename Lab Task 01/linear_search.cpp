#include<bits/stdc++.h>
using namespace std;
int n;
int  linearSearch(int ara[],int x)
{
    for(int i=0; i<n; i++)
        if(x==ara[i])
            return i;
    return -1;
}
int main()
{
    int ara[]= {2,1,4,108,98,7},x,res;
    n=sizeof(ara)/sizeof(ara[0]);
    cout<<"Enter element you want to search(press 0 to exit) : ";
    while(1)
    {
        cin>>x;
        if(x==0)
            break;
        res=linearSearch(ara,x);
        if(res==-1)
            cout<<x<<" is not found\n";
        else
            cout<<x<<" is found at position "<<res+1<<endl;
    }
    return 0;
}
