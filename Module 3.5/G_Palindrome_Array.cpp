#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 bool isPalindrome(int a[],int n)
 {
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(a[left]!=a[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
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
    if(isPalindrome(a,n))
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}