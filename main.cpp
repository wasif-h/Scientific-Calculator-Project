
#include <bits/stdc++.h>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Basic Calculator ----\n\n";
    
    // feature options
    cout << "\t1. Addition" << endl;
    cout << "\t2. Subtraction" << endl;
    cout << "\t3. Multiply" << endl;
    cout << "\t4. Division" << endl;
    int opt;
    cout << "\n\nEnter Options to perform -->> ";
    cin >> opt;

    // adding feature to the switch case to perform the specific funciton according to the users input

    int a, b;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter Second value : ";
    cin >> b;

    cout << "a = " << a << "\nb = " << b << endl;

    switch (opt)
    {
    case 1:
        cout << "a + b = " << addition(a,b);
            break;

    default:
        break;
    }

    return 0;
}