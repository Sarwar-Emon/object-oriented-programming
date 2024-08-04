#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Person
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    Person p[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,p[i].name);
        cin>>p[i].roll>>p[i].marks;
        getchar();
    }
    Person mx;
    mx.marks=INT_MIN;

    for(int i=0;i<3;i++)
    {
        if(p[i].marks>mx.marks)
        {
            mx=p[i];
        }
    }
   cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;



    Person mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(p[i].marks<mn.marks)
        {
            mn=p[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks;

    return 0;
}