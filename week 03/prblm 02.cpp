#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0,n;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    int MIN=sum,MAX=-1;
    for(i=0;i<n;i++)
    {
        MIN=min(MIN,sum-ara[i]);
        MAX=max(MAX,sum-ara[i]);
    }
    cout<<MIN<<' '<<MAX<<endl;
    return 0;
}
