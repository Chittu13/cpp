#include<iostream>
using namespace std;
class Distance
{
    private:
    int meter;
    friend int addFive(Distance);
    public:
    Distance() : meter(0) {} 
}; 
int addFive (Distance d)
{
    d.meter +=5;
    return d.meter;
}
class Duration
{ 
    private: int minute;
    friend int addFive(Duration);
    public:
    Duration() : minute(0) {} 
}; 
int addFive (Duration d) 
{
    d.minute +=5; 
    return d.minute;
} 
int main() 
{
    Duration Du;
    cout <<"Duration: "<<addFive(Du)<<endl;
    Distance D;
    cout <<"Distance: "<<addFive(D);
    return 0;
} 
