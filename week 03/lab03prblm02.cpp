#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Search,i;
    cout<<"Enter the number of product: ";
    cin>>n;
    int ara[n];
    cout<<"Enter product code: ";
    for(i=0; i<n; i++)
        cin>>ara[i];
    cout<<"Enter code to search: ";
    cin>>Search;

    int flg=-1;
    for(i=0; i<n; i++)
    {
        if(ara[i]==Search)
            flg=i;
    }

    if(flg==-1)
        cout<<"Product not available"<<endl;
    else
        cout<<"Position = "<<flg<<" Row"<<endl;
    return 0;
}
