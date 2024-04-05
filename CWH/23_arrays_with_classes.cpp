#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter();
    void setData();
    void displayData();
};

void Shop::initCounter()
{
    counter = 0;
}

void Shop::setData()
{
    cout << "Enter ID of item number " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter Price of item number " << counter + 1 << ": ";
    cin >> itemPrice[counter];
    ++counter;
}

void Shop::displayData()
{
    cout << "ID    Price" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[i] << "    " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setData();
    dukan.setData();
    dukan.setData();
    dukan.displayData();
    return 0;
}