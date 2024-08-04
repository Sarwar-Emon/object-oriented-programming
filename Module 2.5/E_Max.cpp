#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int M;  
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> M; 
        mx = max(mx, M); 
    }
    cout << mx << endl;

    return 0;
}
