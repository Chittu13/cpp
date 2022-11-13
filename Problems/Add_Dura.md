# Write a C ++ program to add two Duration class objects.

```cpp
#include <iostream>

using namespace std;

class Duration{
    int H,M,S;
    public:
    void take(int x, int y, int z)
    {
        H=x;M=y;S=z;
    }
    void add()
    {
        M = M + S / 60;
		S = S % 60;
		H = H + M / 60;
		M = M % 60;
    }
    
    // Operator overloading
    Duration operator+(Duration t)
    {
        Duration Mu;
        Mu.S=S+t.S;
        Mu.M=M+t.M;
        Mu.H=H+t.H;
        Mu.add();
        return Mu;
    }
    
    	void show()
	{
		cout << endl
			<< H << ":" << M << ":" << S;
	}
};

int main()
{
   Duration a,b,c;
   a.take(4,3,9);
   b.take(8,2,67);
   c=a+b;
   
   a.show();
   b.show();
   c.show();

    return 0;
}```