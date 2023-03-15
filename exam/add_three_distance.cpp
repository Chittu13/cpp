#include<iostream>
using namespace std;
class distances
{ 
    int feet;
    float inches;
    public: 
    distances()
    {
        feet=0; 
        inches=0.0;
    }
    distances(int a,float b)
    {
        feet=a;
        inches=b;
    }
    void getter(); 
    distances setter(distances,distances);
    void display();
};
void distances::getter() 
{      
    cout<<"Enter feet and inches: ";
    cin>>feet>>inches; 

} 
distances distances::setter(distances d1,distances d2) 
{
    distances temp;
    temp.inches=inches+d1.inches+d2.inches; 
    while(temp.inches>=12) 
    { 
        temp.inches=temp.inches-12;
        temp.feet++ ;   
    }
    temp.feet =feet+d1.feet+d2.feet+temp.feet;
    return temp;
} 
void distances::display() 
{  
    cout<<"feet: "<<feet<<endl;     
    cout<<"inches: "<<inches<<endl;
} 
int main() 
{
    distances d1,d2 (1,1),d3(2,2),d4;
    d1.getter();     
    d4=d3.setter (d1,d2);//adding 3 objects
    d1.display();
    d2.display(); 
    d3.display();   
    d4.display();
    
    return 0;
} 
