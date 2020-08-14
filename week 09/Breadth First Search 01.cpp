#include<bits/stdc++.h>
using namespace std;
int n;
int visited[100],mat[100][100];
void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i]=1;
    while(!q.empty())
    {
        k=q.front();
        q.pop();
        cout<<k<<endl;
        for(int j=0; j<n; j++)
        {
            if(mat[k][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                q.push(j);
            }
        }
    }
}
int main()
{
    int i,j;
    cout<<"Enter Number of Cloths:";
    cin>>n;
    cout<<"Their Connection:"<<endl;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>mat[i][j];
    cout<<"Wearing list:"<<endl;
    bfs(0);
    return 0;
}
