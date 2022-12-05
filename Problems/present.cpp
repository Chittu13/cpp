#include <iostream>
using namespace std;

class Distances{

  int feet;
  int inches;
  public:
  Distances()
  {
    feet=0;
    inches=0;
  }
  Distances(int a, int b)
  {
    feet=a;
    inches=b;
    
  }
Distances setter(Distances obj1, Distances obj2)

{
    Distances temp;
    temp.feet=feet + obj1.feet + obj2.feet;
    temp.inches=inches+obj1.inches+obj2.inches;
    while(temp.inches>=12)
    {
        
        temp.feet=temp.feet+1;
        temp.inches=temp.inches-12;
        
    }
    return temp;
    
}
void display()
{
    
    cout<<"Feet= "<<endl<<feet<<endl<<"inches= "<<endl<<inches;
}
};

int main()
{
    
    
    Distances d1(1,2), d2(2,6), d3(2,9), d4;
    d4=d3.setter(d1,d2);
    d4.display();
    return 0;
}
