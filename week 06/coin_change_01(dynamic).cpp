/*Suppose you want to pay back someone with 16 taka and you have unlimited 
supply of 1 taka, 2 taka, 8 taka and 12 taka notes. Your target is to use 
the minimum number of notes to payback the said amount of money. That means
 how many notes you chose, write the program.*/
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
            if(coin[j]<=change)
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
    int i,totalCoin=4,change=16;
    int coin[]= {1,2,8,12};
    coin_change(coin,totalCoin,change);
    return 0;
}
