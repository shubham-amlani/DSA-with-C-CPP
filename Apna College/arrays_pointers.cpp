#include <iostream>
using namespace std;
int main()
{
    int marks[] = {10, 20, 30, 40, 50};
    cout << *(&marks[0]) << endl;
    return 0;
}