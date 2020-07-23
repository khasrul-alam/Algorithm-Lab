/*Suppose, you go to a market with a knapsack, which maximum capacity is 5kg.
There four items with weight and value. Then find the maximum profit and print it.*/


#include<bits/stdc++.h>
using namespace std;
void accending(int w[],int p[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(w[j]>w[j+1])
            {
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
}

int knapsack(int w[],int p[],int n,int bagSize)
{

    int i,j;
    accending(w,p,n);
    int ara[n+1][bagSize+1];
    for(i=0;i<=n;i++)
        ara[i][0]=0;
    for(j=0;j<=bagSize;j++)
        ara[0][j]=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bagSize;j++)
        {
            if(w[i-1]>j)
                ara[i][j]=ara[i-1][j];
            else
                ara[i][j]=max((p[i-1]+ara[i-1][j-w[i-1]]),ara[i-1][j]);
        }
    }
    return ara[n][bagSize];
}
int main()
{
    int n=4,i,bagSize=5;
    int w[]={2,1,3,2},p[n]={12,10,20,15};
    cout<<"Maximum Profit:"<<knapsack(w,p,n,bagSize)<<endl;
    return 0;
}

