#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
int ara[101];

int main()
{
    clock_t START,END;
    START=clock();

    int n,x;
    cout<<"Input:";
    cin>>n;
    cout<<"By recursion-"<<endl;
    cout<<"Output: "<<fib(n)<<endl;
    END=clock();
    printf("Time required: %f\n\n",(float)(END-START)/CLOCKS_PER_SEC);

    START=clock();
    ara[0]=0,ara[1]=1;
    for(int i=2;i<=n;i++)
        ara[i]=ara[i-1]+ara[i-2];

    cout<<"By array-"<<endl;
    cout<<"Output: "<<ara[n]<<endl;
    END=clock();
    printf("Time required: %f\n",(float)(END-START)/CLOCKS_PER_SEC);

    return 0;
}

