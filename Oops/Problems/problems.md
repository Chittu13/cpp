# Write a program to create a STUDENT class and display the name,roll number, total marks, average and sort the STUDENT class by roll number 

```c
#include <iostream>

using namespace std;

struct student{
    string name;
    int roll_num;
    float marks;
    float average;
}s[10],sort;


int main()
{
  int a,num,sub[10];  
  cout<<"Enter the number of students: ";
  cin>>a;
  for (int i=0;i<a;i++)
  {
    int av=0,total=0;
    cout<<"\nEnter the student "<<i+1<< " name: ";
    cin>>s[i].name;
    cout<<"\nEnter the roll number: ";
    cin>>s[i].roll_num;
    cout<<"\nEnter the number of subjects: ";
    cin>>num;
    for(int j=0;j<num;j++)
    {
      cout<<"\nEnter the subject "<<j+1<< " marks: ";
      cin>>sub[j];
      total+=sub[j];
    }
    s[i].marks=total;
    av=total/num;
    s[i].average=av;
  }
  for(int i=0;i< a-1;i++)
 {
  for(int j=0;j<a;j++)
  {
   if(s[i].roll_num>s[j].roll_num)
   {
    sort = s[i];
    s[i] = s[j];
    s[j] = sort;
   }
  }
 }
  cout<<"\n----------Students details----------";
  cout<<"\nName\t\t\tRoll_Number\tTotal_Marks\tAverage\n";
  for(int i=0;i<a;i++)
  {
      cout<<s[i].name<<"\t\t\t"<<s[i].roll_num<<"\t\t"<<s[i].marks<<"\t\t"<<s[i].average<<"\n";
  }

    return 0;
}
```
