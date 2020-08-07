#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Input: ";
    cin>>a>>b;
    if(b>a)swap(a,b);
    cout<<"Output: "<<gcd(a,b)<<endl;
    return 0;
}
