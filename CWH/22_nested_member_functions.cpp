#include <iostream>
#include <string>
using namespace std;
class binary
{
public:
    string s;
    void read(void);

private:
    void check_bin(void);
    void display();
    void ones_complement(void);
};

void binary::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    check_bin();
    display();
    ones_complement();
    display();
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary number" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << s << endl;
}

int main()
{
    binary bin;
    bin.read();
    return 0;
}