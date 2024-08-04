#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;

    Person(string nm,int ag)
    {
        name=nm;
        age=ag;
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    Person p("Sayem Emon",27);
    p.print();
    return 0;
}