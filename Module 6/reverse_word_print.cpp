// #include<iostream>
// #include<string>       
// #include<sstream>      
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);   

//     stringstream ss(s);  
//     string word;

//     while (ss >> word) {
//         cout << word << endl;  
//     }

//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if(ss>>word)
    {
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin, s);   
    stringstream ss(s);  
    print(ss);
    return 0;
}
