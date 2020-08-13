#include<bits/stdc++.h>
using namespace std;
void lis(int ara[],int n)
{
    string str[n];
    int length[n],i,j,MAX=-1,ind;
    for(i=0;i<n;i++)
    {
        str[i]=(to_string(ara[i])+' ');
        length[i]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(ara[j]<=ara[i])
            {
                length[i]=length[j]+1;
                str[i]=(str[j]+to_string(ara[i])+' ');
            }
        }
        if(length[i]>MAX)
        {
            MAX=length[i];
            ind=i;
        }

    }
    cout<<"LIS = "<<str[ind]<<endl;

}


int main()
{
    int i,Size;
    cout<<"Data size: ";
    cin>>Size;
    cout<<"Data[]=";
    int ara[Size];
    for(i=0;i<Size;i++)
        cin>>ara[i];
    lis(ara,Size);
}
