#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void my_swap(int &x, int &y)
{
    int tmp=x;
    x=y;
    y= tmp;
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            my_swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}