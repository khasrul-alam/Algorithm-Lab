/*Suppose you went to a market, then you gave 15 tk note to the sales person, and he returned some of the currency (1,7,7,10S) that he had in abundance.
Then write the code which is find optimal solution.*/

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
    int n=4,change=15;
    int coins[]={1,7,7,10};
    sort(coins, coins+n);
    coin_change(coins,n,change);
    return 0;
}
