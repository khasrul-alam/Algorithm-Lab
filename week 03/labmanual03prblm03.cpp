#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Search,i;
    cout<<"Enter the number of element: ";
    cin>>n;
    int ara[n];
    cout<<"Enter all elements: ";
    for(i=0; i<n; i++)
        cin>>ara[i];
    cout<<"Enter key: ";
    cin>>Search;
    int flg=-1;
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(ara[mid]==Search)
        {
            flg=1;
            break;
        }
        else if(ara[mid]<Search)
            low=mid+1;
        else if(ara[mid]>Search)
            high=mid-1;
        mid=(low+high)/2;
    }

    if(flg==-1)
        cout<<"Not Found"<<endl;
    else
        cout<<"Found at "<<mid<<" Position"<<endl;
    return 0;
}
