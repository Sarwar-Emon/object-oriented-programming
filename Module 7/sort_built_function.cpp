#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)
{
    if(a.roll<b.roll) return true;
    else return false;
}
int main()
{
    Student p[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,p[i].name);
        cin>>p[i].roll>>p[i].marks;
        getchar();
    }
    //sort function
    sort(p,p+3,cmp);

    for(int i=0;i<3;i++)
    {
        cout<<p[i].name<<" "<<p[i].roll<<" "<<p[i].marks<<endl;
    }
    return 0;
}