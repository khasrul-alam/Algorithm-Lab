/*Suppose, you have coin changing machine. Which has huge amount of coin. Now if any one gave some money then it is return some of coins.
Follow the above approach and find the which coin could be needed and how many times?*/

#include<bits/stdc++.h>
using namespace std;
void coin_change(int coins[], int n, int m)
{
   int cnt[n],i;
   memset(cnt,0,sizeof cnt);
   for(i=n-1;i>=0;i--)
   {
       if(coins[i]<=m)
       {
           cnt[i]=m/coins[i];
           m=m%coins[i];
       }
   }
   if(m!=0)
        cout<<"Change is not possible"<<endl;
   else
   {
       cout<<"Coin need:"<<endl;
       for(i=n-1;i>=0;i--)
       {
           if(cnt[i]!=0)
               cout<<coins[i]<<" coin "<<cnt[i]<<" times"<<endl;
       }
   }
}

int main()
{
    int n=5,change=12;
    int coins[]={2,5,3,4,6};
    sort(coins, coins+n);
    coin_change(coins,n,change);
    return 0;
}
