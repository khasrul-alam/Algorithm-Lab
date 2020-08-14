#include<bits/stdc++.h>
using namespace std;
int n;
int visited[100],mat[100][100];
void dfs(int i)
{
    cout<<i<<endl;
    visited[i]=1;
    for(int j=0;j<n;j++)
    {
        if(mat[i][j]==1 && visited[j]==0)
            dfs(j);
    }
}
int main()
{
    int i,j;
    cout<<"Enter Number of Sub-Offices:";
    cin>>n;
    memset(visited,0,sizeof visited);
    cout<<"Enter Their Connection using Matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>mat[i][j];
    cout<<"Visiting Office:"<<endl;
    dfs(0);
    return 0;
}
