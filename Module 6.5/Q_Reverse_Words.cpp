#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
}