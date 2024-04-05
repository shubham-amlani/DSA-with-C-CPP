#include <iostream>
using namespace std;
class Employee
{
private: // variables and methods that can be accessed by methods only within the classs.
    int a, b, c;

public: // Variables and methods available everywhere
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
        cout << "Value of d is " << d << endl;
        cout << "Value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee e1;
    e1.d = 34;
    e1.e = 89;
    e1.setData(1, 2, 3);
    e1.getData();
    return 0;
}