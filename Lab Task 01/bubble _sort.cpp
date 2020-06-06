#include<bits/stdc++.h>
using namespace std;
int n;
void bubble(int ara[])
{
    for(int i=0; i<n; i++)
        for(int j=0; j<(n-i-1); j++)
            if(ara[j]>ara[j+1])
                swap(ara[j],ara[j+1]);

}
void bubbleOpt(int ara[]) // optimized version of bubble sort
{
    bool flg;
    for(int i=0; i<n; i++)
    {
        flg=true;
        for(int j=0; j<(n-i-1); j++)
            if(ara[j]>ara[j+1])
                swap(ara[j],ara[j+1]),flg=false;
        if(!flg)
            break;
    }
}

int main()
{
    int ara[]= {2,1,4,108,98,7};
    n=sizeof(ara)/sizeof(ara[0]);
    cout<<"Array before swap: ";
    for(int i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    bubbleOpt(ara);
    cout<<"Array after swap: ";
    for(int i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;
}
