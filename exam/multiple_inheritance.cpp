#include<iostream>
using namespace std;
#include<string.h>
class person
{ 
    protected: 
    int age;
    char name[50];
    public: 
    person(int a,char*n)
    { 
        age =a;
        strcpy(name, n);
    } 
    void show()
    { 
        cout <<"name: "<< name <<endl; 
        cout <<"age: "<< age <<endl;
    }
};

class Employee
{
    protected:
    float salary; 
    public: 
    Employee(int s)
    {
        salary =s; 
    }
    void show() 
    { 
        cout <<"salary: "<< salary <<endl;
    } 
}; 
class Teacher : public person, Employee
{ 
    protected: 
    char area[50];
    public: 
    Teacher(int a,char*n,int s,char*ar) : Employee(s), person(a, n)
    { 
        strcpy(area, ar);
    }
    void show()
    {
        person::show();
        Employee::show();
        cout <<"research_area: "<< area <<endl;
    }
};
int main()
{
    Teacher T1(21, "ABC", 7879, "Comp");
    T1.show();
    return 0;
}
