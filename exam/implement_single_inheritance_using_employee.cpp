#include<iostream>
using namespace std;
class employee1
{
    public:
    string name;
    string designation;
    int eno;
    float bp, hra, da, pf, np; 
    void getdata()
    {
        cout <<"Enter the employee name: "; 
        cin>>name;
        cout <<"Enter the designation: "; 
        cin>>designation; 
        cout <<"Enter the basic pay: ";
        cin>>bp;        
        cout <<"Enter the Humen Resource Allowance: "; 
        cin>>hra;
        cout <<"Enter the Dearness Allowance: ";    
        cin>>da;        
        cout <<"Enter the Profitablity Fund: ";     
        cin>>pf;    
        }
        void calculate()
        {
            np = bp + hra + da - pf;    
        } 
            
}; 
class employee2 : public employee1 
{
    private:
    float y;
    public: void data()
    {
        cout <<"Enter the sale percentage: ";
        cin >> y;
    } 
    void display() 
    {
        cout <<"\t Name "<< name<<"\n";
        cout<<"\t Designation "<<"\t"<< designation<<"\n"; 
        cout<<"\t Basic Pay "<< bp<<"\n";  
        cout<<"\t HRA "<< hra<<"\n";     
        cout<<"\t DA "<< da<<"\n";
        cout<<"\t PF "<< pf<<"\n"; 
        cout<<"\t Gross Pay "<< np <<"\n"<<"\n";
        cout <<"Net Pay = "<< (np+((np * y)/100)); 
    }
};
int main()
{
    employee2 a;
    a.getdata();     
    a.calculate();
    a.data();
    a.display();
    return 0;
    }
