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
        cout<<"\nEnter the Employee Grade: ";
        cin>>e[i].grade;
    }
    for (int i=0;i<num;i++)
    {
        e[i].gross=e[i].basic+e[i].da+e[i].hra;
        if(e[i].grade=="1")
        {
            e[i].tax=0;
        }
        else if(e[i].grade=="2")
        {
            e[i].tax=(e[i].gross)*(2/100);
        }
        else if(e[i].grade=="3")
        {
            e[i].tax=(e[i].gross)*(4/100);
        }
            e[i].net_sal=e[i].gross-e[i].tax;
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




cout<<"Id"<<"\t\t"<<"Name"<<"\t\t"<<"Grade: \n";

for(int i=0;i<num;i++)
{
    cout<<e[i].id<<"\t"<<e[i].name<<"\t\t"<<e[i].grade<<"\t\t"<<e[i].tax<<"\n";
}   
cout<<"\nHighest tax paid by the Employee: ";
cout<<e[0].id<<"\t"<<e[0].name<<"\t\t"<<e[0].grade<<"\t\t"<<e[0].tax<<"\n";
return 0;
}

