// Static Data Members & Static Member  Methods in C++ OOPS

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << endl;
        cout << "Enter the id ";
        cin >> id;
        ++count;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount()
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // Default value will be 0

int main()
{
    Employee harry, rohan, skillf;
    // harry.id = 1; Cannot do this ---> Private members
    // harry.count = 1; Cannot do this ---> Private members

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    skillf.setData();
    skillf.getData();
    Employee::getCount();
    return 0;
}