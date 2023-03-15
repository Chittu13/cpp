#include<iostream>
using namespace std;
class student
{
public:
int reg,age;
char name[20];
void read_data();
};
class ugstudent:public student
{
public:int stipend,sem;
float fees;
void read_data();
};
class pgstudent:public student
{
public:int stipend,sem;
float fees;
void read_data();
};
void student::read_data()
{
cout<<"\n enter name:";
cin>>name;
cout<<"\n enter regno:";
cin>>reg;
cout<<"\n enter age:";
cin>>age;
}
void ugstudent::read_data()
{
student::read_data();
cout<<"\n enter the sem:";
cin>>sem;
cout<<"\n enter the fees:";
cin>>fees;
cout<<"\n enter the stipend:";
cin>>stipend;
}
void pgstudent::read_data()
{
student::read_data();
cout<<"\nenter the sem:";
cin>>sem;
cout<<"\n enter the fees:";
cin>>fees;
cout<<"\n enter the stipend:";
cin>>stipend;
}
int main()
{
ugstudent ug[20];
pgstudent pg[20];
int i,n,m;
float average;
cout<<"\n enter the no of entries in the ugstudent class:";
cin>>n;
for(i=1;i<=n;i++)
ug[i].read_data();
for(int sem=1;sem<=8;sem++)
{
float sum=0;
int found=0,count=0;
for(i=1;i<=n;i++)
{
if(ug[i].sem==sem)
{
sum=sum+ug[i].age;
found=1;
count++;
}}
if(found==1)
{
average=sum/count;
cout<<"\n average of age of sem"<<sem<<"is"<<average;
}}
cout<<"\n enter the no of entries of pgstudent class:";
cin>>n;
for(i=1;i<=n;i++)
pg[i].read_data();
for(int sem=1;sem<=8;sem++)
{
float sum=0;
int found=0,count=0;
for(i=0;i<=n;i++)
{
if(pg[i].sem==sem)
{
sum=sum+pg[i].age;
found=1;
count++;
}}
if (found==1)
{
average=sem/count;
cout<<"/n average of age of sem"<<sem<<"is"<<average;
}}
return 0;
}
