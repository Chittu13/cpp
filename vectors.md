# A vector container has three types of member fuction
- Modifer
- Iterator
- Capacity


# 1. Modifer
- push_back()
- pop_back()
- insert()
- empty()
- swap()
- assign()
- clear()

# Iterator
- begin()
- end()

# Capacity
- size()
- max_size()
- resize()
- capacity()
- empty()

# 1. Modifer
```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> num;
num.assign(5,1);  // 5 times 1 will store in vector
for(int i=0;i<num.size();i++)
{
cout<<num[i]<<" "; 
}
num.push_back(4);
int x=num.size();
cout<<"\nlast element of array: "<<num[x-1]<<"\n";
num.pop_back();
num.insert(num.end(),8);
for(int i=0;i<num.size();i++){
cout<<num[i]<<" ";
}
return 0;
}
```
# Iterator
```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> num; 
for(int i=0;i<9;i++)
{
num.push_back(i); // it will push the elements form 0 to 8
}
for(auto a=num.begin();a!=num.end();a++)
{
    cout<<*a<<' ';
}
return 0;
}
```
