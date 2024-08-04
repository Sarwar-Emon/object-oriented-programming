#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student
{
   public:
   char name[100];
   int roll;
   int cls;
   char section; 

   Student(int r, char s, int c, char* n)
   {
    roll=r;
    cls=c;
    section=s;
    strcpy(name,n);
   }
};
int main()
{
    Student s(29,'A',7,"Sayem Emon");
    Student e(100,'D',1," Suhana");
    
    cout<<s.roll<<endl;
    cout<<s.section<<endl;
    cout<<s.cls<<endl;
    cout<<s.name<<endl;
    cout<<e.roll<<endl;
    cout<<e.name<<endl;
    
    return 0;
}