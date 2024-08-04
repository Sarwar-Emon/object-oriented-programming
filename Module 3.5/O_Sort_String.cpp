#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[100];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s->begin(),s->end());
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}