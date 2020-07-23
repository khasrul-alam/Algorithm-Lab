/*Are you know the Fibonacci series? If yes, given a positive value with t. Then find the solution & also print it.*/

#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int f[n+2],i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];

}
int main()
{
    int n,t;
    cout<<"Test Case:";
    cin>>t;
    for(int i=1;i<=t;i++){
    cout<<"Number "<<i<<": ";
    cin>>n;
    cout<<"Fibonacchi "<<i<<" :"<<fib(n)<<endl;
    }
    return 0;
}
