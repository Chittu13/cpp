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
cout<<"Id"<<"\t\t"<<"Name"<<"\t\t"<<"Grade:"<<"\t\t"<<"tax\n";
for(int i=0;i<num;i++)
{
    cout<<e[i].id<<"\t"<<e[i].name<<"\t\t"<<e[i].grade<<"\t\t"<<e[i].tax<<"\n";
}  
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
return 0;
}
```