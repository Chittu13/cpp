# 1. Write a C++ program to compute area of Square,Circle,Triangle and Rectangle using function overloading concept.

- Triangle. Area = ½ × b × h. b = base. h = vertical height.
- Square. Area = a2. a = length of side.
- Rectangle. Area = w × h. w = width
- Circle. Area = π × r2. r = radius.



``` cpp
#include<iostream>
using namespace std;

void Area(int a)
{
    cout<<"\nArea of square: ";
    cout<< a*a;
}
void Area(double a,double b)
{
    cout<<"\nArea of Triangle ";
    cout<< (a*b)/2;
}
void Area(int x,int y)
{
    cout<<"\nArea of rectangel ";
    cout<<x*y;
}

void Area(double a)
{
    cout<<"\nArea of Cicle ";
    cout<< 3.14*a*a;
}
int main()
{
    Area(3);
    Area(5.0);
    Area(3.4,9.4);
    Area(3,8);
    return 0;
    
}
```