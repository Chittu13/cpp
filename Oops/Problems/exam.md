## 1. Write a c++ program to compute the addition of two numbers using function overloading concept.


```cpp
#include <iostream>
using namespace std;

int  add(int a, int b)
{
    return (a+b);
}
int  add(double a, double b)
{
    return (a+b);
}
int main()
{
    cout<<add(2,4)<<endl;
    cout<<add(3.4,3.6)<<endl;
    return 0;
}
```


## 2. Write a c++ program for inline functions and list the situations when inline functions may not work.


> 1) If a function contains a loop. (for, while, do-while)
> 2) If a function contains static variables.
> 3) If a function is recursive.
> 4) If a function return type is other than void, and the return statement doesn’t exist in function body.
> 5) If a function contains switch or goto statement.

```cpp
#include <iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
int main()
{
	cout << "Sum of two number is: " << add(3,5) << "\n";
	return 0;
}
```


# 3. Write a c++ program for addition of 2*2 matrix

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a[2][2],i,j,sum=0;
    cout<<"Enter the four elements: "<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    cout<<"Addition of 2*2 matrix is "<<sum<<endl;
return 0;
}
```

## 4. Write a c++ program to read and display student details using structures.

```cpp
// Write a c++ program to read and display student details using structures.

#include <iostream>
using namespace std;

struct student{
    
    char name[50];
    int roll_num,age;
    
    void read()
    {
        cout<<"Enter the name of the student: "<<endl;
        cin>>name;
        cout<<"Enter the student Roll Number: "<<endl;
        cin>>roll_num;
        cout<<"Enter the age of the student: "<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Roll_Number: "<<roll_num<<endl<<"Age: "<<age<<endl;
    }
        
    
};

int main()
{
    struct student s1;
    s1.read();
    s1.display();
    return 0;
}
```
