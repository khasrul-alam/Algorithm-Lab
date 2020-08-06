#include<bits/stdc++.h>
using namespace std;
void First_Fit_Decreasing(int ara[], int Size,int n)
{
    int i,p,j,bin[n],b;
    sort(ara,ara+n);
    for(i=0; i<n; i++)
        bin[i]=7;

    b=1,j=0;

    for (i = n-1; i >=0; i--)
    {
        if(bin[b-1]==0)
            b=b+1;
        for(j=0; j<b; j++)
        {
            if(bin[j]>=ara[i])
            {
                bin[j]-=ara[i];
                break;
            }
            else if(bin[j]<ara[i])
            {
                ara[i]-=bin[j];
                bin[j]=0;
            }
        }

    }

    cout<<"Minimum bus need: "<<b<<endl;
}
int main()
{
    int n;
    cout<<"Number of groups:";
    cin>>n;
    int ara[n], i,Size;
    cout<<"Enter group with student:";
    for (i = 0; i < n; i++)
        cin>>ara[i];

    cout<<"Capacity of bus: ";
    cin>>Size;
    First_Fit_Decreasing(ara, Size,n); //
    return 0;
}
