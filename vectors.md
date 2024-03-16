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
cout<<"\nlast element of array: "<<num[num.size()];
num.pop_back();
num.insert(num.end(),8);
for(int i=0;i<num.size();i++){
cout<<num[i]<<" ";
}
return 0;
}


```
