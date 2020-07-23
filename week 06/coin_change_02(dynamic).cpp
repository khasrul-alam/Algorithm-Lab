/*Suppose you are given the coins 1 taka, 5 taka, and 10 taka with Total Taka = 8 taka,
what are the total number of permutations of the coins you can arrange to obtain 8 taka.*/

#include<bits/stdc++.h>
using namespace std;
void coin_change(int coin[],int totalCoin,int change)
{
    int m[change+1],minimum;
    m[0]=0;
    for(int i=1; i<=change; i++)
    {
        minimum=change+1;
        for(int j=0; j<totalCoin; j++)
        {
            if(coin[j]<=i)
            {
                minimum=min(minimum,m[i-coin[j]]+1);
            }
        }
        m[i]=minimum;
    }
    if(m[change]==0)
        cout<<"Change is not possible\n";
    else
        cout<<"Coin needed: "<<m[change]<<endl;
}
int main()
{
    int i,totalCoin=3,change=16;
    int coin[3]={1,5,10};
    coin_change(coin,totalCoin,change);
    return 0;
}
