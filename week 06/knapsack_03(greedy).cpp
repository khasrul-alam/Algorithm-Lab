/*Suppose you enters a house for robbing it. You can carry a maximum weight of 60 kg into your bag. There are 5 items in the house with the following weights and values. 
Then find the maximum profit if you can even take the fraction of any item with you? Write the program.*/


#include<bits/stdc++.h>
using namespace std;
void Sort(double value[],int weigth[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(value[j]<value[j+1])
            {
                swap(value[j],value[j+1]);
                swap(weigth[j],weigth[j+1]);
            }
        }
    }
}
void knapsack(int n,int w,int weigth[],double value[])
{
    int i,profit=0;
    for(i=0;i<n;i++)
        value[i]=value[i]/weigth[i];
    Sort(value,weigth,n);
    for(i=0;i<n;i++)
    {

            if(w>weigth[i] && w)
            {
                profit=profit+ (weigth[i]*value[i]);
                w-=weigth[i];
            }
            else if(w<=weigth[i] && w)
            {
                profit=profit+ (w*value[i]);
                w=0;
            }
    }
    cout<<"Maximum profit: "<<profit<<" tk"<<endl;
}
int main()
{
    int n=5,w=60;
    int weigth[]={5,10,15,22,25};
    double value[]={30,40,45,77,90};
    knapsack(n,w,weigth,value);
    return 0;
}
