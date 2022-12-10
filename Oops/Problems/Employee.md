 # 1. Create a structure EMPLOYEE with the field's employee name, id, grade, basic, da, hra, gross salary, net salary. Input the details of n employees and calculate the gross salary, net salary and tax paid for each of them. 
 
- Gross salary = basic+da+hra:
- Tax = Gross salary*(tax percentage/100)
- Net salary = Gross Salary-Tax

### Basic Details:
- baisc = Rs.30000 for Grade1
- baisc = Rs.25000 for Grade2
- baisc = Rs.20000 for Grade3
- baisc = Rs.15000 for Grade4

### Tax Details:
- No tax for Gross salary <= 40000
- 10% tax for gross salary >40000 and <= 75000
- 15% tax for gross salary > 75000

 
 Write the functions to perform the following operations: 
- 1. Sort the employee details based on id.
- 2. Display the details of all the employees of a given grade and sort based
- 3. Display the details of employee who pays Highes Tax.
- 4. Display the details of employee who pays Lowest Tax.





```cpp


#include<iostream>
using namespace std;
struct employee
{
string name,grade;
int id,basic,da,hra,gross;
float tax,net_sal;
public:
}e[10];

int main()
{
    int num,p;
    cout<<"Enter the number of Employee: ";
    cin>>num;
    
    // Taking n number of inputs form  user 
    
    for (int i=0;i<num;i++)
    {   cout<<"Empolyee "<<i+1 <<":";
        cout<<"\nEnter the Employee name: ";
        cin>>e[i].name;
        cout<<"\nEnter the Employee id: ";
        cin>>e[i].id;
        cout<<"\nEnter the Employee basic: ";
        cin>>e[i].basic;
        cout<<"\nEnter the Employee da: ";
        cin>>e[i].da;
        cout<<"\nEnter the Employee hra: ";
        cin>>e[i].hra;
        cout<<"\n\n";
    }
    
    // Calculating  the  Gross salary,Tax and Net salary
    
    for(int i=0;i<num;i++)
    {
        e[i].gross=e[i].basic+e[i].da+e[i].hra;
        if(e[i].gross<=40000)
        {
            e[i].tax=0;
        }
        else if (e[i].gross>40000 & e[i].gross<=75000)
        {
            e[i].tax=e[i].gross*0.1/100;
        }
        else if (e[i].gross>75000 )
        {
            e[i].tax=e[i].gross*0.1/100;
        }
        e[i].net_sal=e[i].gross-e[i].tax;
    }
    
    // Grading the employee according to basic price
    
    for(int i=0;i<num;i++)
    {
        if (e[i].basic>=30000)
        {
            e[i].grade="Grade1";
        }
        else if(e[i].basic<30000 & e[i].basic>=25000)
        {
            e[i].grade="Grade2";
        }
        else if(e[i].basic<25000 & e[i].basic>=20000)
        {
            e[i].grade="Grade3";
        }
        else if(e[i].basic<20000 & e[i].basic>=15000)
        {
            e[i].grade="Grade4";
        }
    }
    
// Sorting the Employee list according to their ID

for(int i=0;i<num;i++)
{
    for(int j=i+1;j<num;j++)
    {
        if(e[i].id>e[j].id)
        
        {
            employee p=e[i];
            e[i]=e[j];
            e[j]=p;
        }
    }
}

// Printing the result

cout<<"Id"<<"\t\t"<<"Name"<<"\t\t"<<"Grade:"<<"\t\t"<<"tax\n";
for(int i=0;i<num;i++)
{
    cout<<e[i].id<<"\t"<<e[i].name<<"\t\t"<<e[i].grade<<"\t\t"<<e[i].tax<<"\n";
}  

// Again sorting Employee list according to their tax pay

for(int i=0;i<num;i++)
{
    for(int j=i+1;j<num;j++)
    {
        if(e[i].tax>e[j].tax)
        
        {
            employee p=e[i];
            e[i]=e[j];
            e[j]=p;
        }
    }
}
cout<<"\nHighest tax paid by the Employee: \n";
cout<<e[num-1].id<<"\t"<<e[num-1].name<<"\t\t\t"<<e[num-1].grade<<"\t\t"<<e[num-1].tax<<"\n";
cout<<"\nLowest tax paid by the Employee: \n";
cout<<e[0].id<<"\t"<<e[0].name<<"\t\t\t"<<e[0].grade<<"\t\t"<<e[0].tax<<"\n";
return 0;
}
```
