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
    char name[100]="Sayem Sarwar Emon";
    Student* rahim= new Student(10,'R',2,name);
    
    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    return 0;
}