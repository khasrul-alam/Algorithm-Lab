#include<bits/stdc++.h>
using namespace std;
int n;
void mergesort(int ara[],int l,int r)
{
    if(l==r)
        return;
    int mid=(l+r)/2;
    mergesort(ara,l,mid);
    mergesort(ara,mid+1,r);
    int dummy[n];
    for(int i=l,j=l,k=mid+1;i<=r;i++)
    {
        if(j>mid)
            dummy[i]=ara[k++];
        else if(k>r)
            dummy[i]=ara[j++];
        else if(ara[j]<=ara[k])
            dummy[i]=ara[j++];
        else if(ara[k]<ara[j])
           dummy[i]=ara[k++];
    }
    for(int i=l;i<=r;i++)
        ara[i]=dummy[i];
}

int main()
{
    int i,j,Min,x,t;
    cout<<"Enter the number of element: ";
    cin>>n;
    int ara[n],sum=0,digit_sum=0;
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    mergesort(ara,0,n-1);

    cout<<"Sort list: ";
    for(i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;
    while(sum)
    {
        digit_sum+=(sum%10);
        sum=sum/10;
    }
    cout<<"Digit Sum: "<<digit_sum<<endl;

    return 0;
}
