#include<iostream>
#include<stdexcept>

using namespace std; 

float Division(float num,float den)
{    
if (den==0)     
{ 
    throw runtime_error("Math error: Attempted to divide by Zero\n");
}

return (num/den);
} 
int main() 
{
    float numerator, denominator, result;
    cout<<"Enter the Numeratro and denominator: "<<endl;
    cin>>numerator>>denominator;
    
   try
    {         
        result =Division(numerator, denominator);
              
        cout <<"The quotient is "<< result <<endl;
    }    
    catch (runtime_error&e)  
    { 
        cout <<"Exception occurred"<<endl<< e.what();   
    }
    
    return 0;
}
