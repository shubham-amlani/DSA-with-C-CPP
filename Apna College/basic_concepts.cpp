#include <iostream>
using namespace std;
int main()
{
    /*
//  Input/Output in CPP

    int amount1;
    cout << "Enter amount 1";
    cin >> amount1;
    int amount2;
    cin >> amount2;
    int sum = amount1 + amount2;
    cout << sum;

    */

    /*
    // Conditionals in CPP

    //Driving licence eligiblity
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for driving license test...\n";
    }
    else
    {
        cout << "You are not eligible for driving license test...\n";
    }

//Find max out of 3 numbers
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

//Odd even

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }


    // Loops in CPP
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello world!\n";
    }

    int i = 4;
    for (i; i < 10; i++)
    {
        cout << "Hey bro!\n";
    }

    int n;
    while (n > 0)
    {
        cin >> n;
        cout << n << endl;
    }

    do
    {
        cin >> n;
        cout << n << endl;
    } while (n > 0);


    // break and continue;
    int pocketMoney = 3000;
    for (int date = 1; date <= 30; date++)
    {
        if (pocketMoney == 0)
        {
            cout << "Uh oh! Pocket money ends...\n";
            break;
        }
        if (date % 2 == 0)
        {
            continue;
        }

        cout << "Date is " << date << "! You can go out today\n";
        pocketMoney -= 300;
    }


    int n;
    cout << "Please input n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }

    int a, b;
    cout << "Please input a and b:";
    cin >> a >> b;
    int i;
    for (a; a <= b; a++)
    {
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                break;
            }
        }
        if (i == a)
        {
            cout << a << endl;
        }
    }

    // switch case statement
    char button;
    cout << "Input a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Namaste";
        break;
    case 'c':
        cout << "Hola";
        break;
    case 'd':
        cout << "Salut";
        break;
    case 'e':
        cout << "Ram Ram!";
        break;

    default:
        cout << "I'm still learning more";
        break;
    }

    int n1, n2;
    cout << "Input two numbers: ";
    cin >> n1 >> n2;
    char op;
    cout << "Input an operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;
        break;

    case '%':
        cout << n1 % n2;
        break;

    default:
        cout << "Invalid operator entered!";
        break;
    }
    */
    // Operators in CPP

    return 0;
}