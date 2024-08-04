#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    Person *rakib= new Person("Rakib Hossen",20);
    Person *sakib= new Person("sakib Mia",30);
    *rakib= *sakib;
    rakib->print();
    return 0;
}