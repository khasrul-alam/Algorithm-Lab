#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,i;
    cout<<"Enter the number of element of the array: ";
    cin>>n;
    int ara[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>ara[i];
    cout<<"Enter Key: ";
    cin>>key;
    int flg=-1;

    for(i=0; i<n; i++)
    {
        if(ara[i]==key)
            flg=i;
    }

    if(flg==-1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Last occurrence = "<<flg<<endl;
    return 0;
}
