#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter Array Size: ";
    cin>>n;
    int ara[n];
    double sum=0;
    cout<<"Enter Data: ";
    for(i=0;i<n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }

    for(i=1;i<n;i++)
    {
        int x=ara[i];
        j=i;
        while(j>0 && ara[j-1]>x)
        {
            ara[j]=ara[j-1];
            j--;
        }
        ara[j]=x;
    }


   cout<<"Ascending Order: ";
    for(i=0;i<n;i++)
        cout<<ara[i]<<' ';
    cout<<endl;
    cout<<"Avg = "<<(sum/n)<<endl;

    return 0;
}
