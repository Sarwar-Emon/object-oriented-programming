#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     int cnt=0;
     int found=false;
 
    for(char c:s)
    {
        if(isalpha(c))
        {
           if (found==false)
           {
            cnt++;
           }
           found=true;
        }
           else
           {
            found=false;
           }
    }
    cout<<cnt<<endl;
    return 0;
}