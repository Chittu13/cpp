#include<iostream>
using namespace std;
class distances
{ 
    int feet;
    float inches;
    public: distances()
    { 
        feet =0;
        inches =0.0;    
    } 
    distances(int a,float b)
    {   
        feet =a;    
        inches =b;
    }
    void getter(); 
    distances setter(distances);
    void display();
};
void distances::getter() 
{
    cout <<"Enter feet and inches: "; 
    cin >> feet >> inches;
} 
distances distances::setter(distances d2)
{
    distances temp;
    temp.inches = inches +d2.inches; 
    while (temp.inches >=12)
    {         
        temp.inches = temp.inches -12;  
        temp.feet++;
    }    
    temp.feet = feet +d2.feet + temp.feet;
    return temp; 
}
void distances::display()
{ 
    cout <<"Feet: "<< feet <<endl;
    cout <<"Inches: "<< inches <<endl;
} 

int main()
{ 
    distances d1, d2(1, 1), d3;
    d1.getter();
    d3 = d1.setter(d2);
    d2.display(); 
    d3.display(); 
    return 0; 
}
