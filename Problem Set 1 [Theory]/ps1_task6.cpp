#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int ara[N];
int main()
{
    ara[0]=0,ara[1]=1;
    for(int i=2;i<=N;i++)
    {
        ara[i]=ara[i-1]+ara[i-2];

        if(ara[i]>9)
            ara[i]%=10;
    }
    cout<<"Input:";
    int n;
    cin>>n;
    cout<<"Output: "<<ara[n]<<endl;

    return 0;
}
