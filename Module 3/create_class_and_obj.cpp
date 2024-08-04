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
};
int main()
{
    Student s;
    char c[100]="sayem sarwar emon";
    strcpy(s.name,c);
    s.roll=10;
    s.cls= 7;
    s.section='B';

    Student karim;
    char k[100]="Karim uddin";
    strcpy(karim.name,k);
    karim.section='A';
    cout<<karim.name<<endl;
    return 0;
}