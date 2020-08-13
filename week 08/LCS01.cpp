#include<bits/stdc++.h>
using namespace std;
int length[20][20];
char dir[20][20];

void lcs(string a,string b)
{
    int i,j;
    for(i=0;i<20;i++){
        length[i][0]=0;
        length[0][i]=0;
    }
    for(i=1;i<=b.size();i++)
    {
        for(j=1;j<=a.size();j++)
        {
            if(a[j-1]==b[i-1])
                length[i][j]=1+length[i-1][j-1],dir[i][j]='d';
            else if(length[i][j-1]>=length[i-1][j])
                length[i][j]=length[i][j-1],dir[i][j]='r';
            else if(length[i][j-1]<length[i-1][j])
                length[i][j]=length[i-1][j],dir[i][j]='u';
        }
    }
}
string print(string a,string b)
{
    int i=b.size(),j=a.size();
    string str;
    while(i!=0 && j!=0)
    {
        if(dir[i][j]=='d')
            str+=a[j-1],i--,j--;
        else if(dir[i][j]=='u')
            i--;
        else if(dir[i][j]='r')
            j--;
    }
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    string a,b;
    cout<<"First Sequence=";
    cin>>a;
    cout<<"Second Sequence=";
    cin>>b;
    lcs(a,b);
   // cout<<"length:"<<length[b.size()][a.size()]<<endl;
    cout<<"DNA Most Match="<<print(a,b)<<endl;
}
