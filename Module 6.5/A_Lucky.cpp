#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string ticket;
        cin>>ticket;

        int first_three=0;
        int last_three=0;
        for(int i=0;i<3;i++)
        {
            first_three= first_three+ticket[i]-'0';
        }
        for(int i=3;i<6;i++)
        {
            last_three= last_three+ticket[i]-'0';
        }
        
        if(first_three== last_three)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}