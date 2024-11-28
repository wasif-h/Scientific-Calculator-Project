
#include <bits/stdc++.h>
#include"BasicCalc.cpp"
using namespace std;

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

    case 2:
        cout << "a - b = " << subtraction(a,b);
            break;

    case 3:
        cout << "a * b = " << multiplication(a,b);
            break;

    case 4:
        if(b != 0)
            cout << "a / b = " << divison(a,b);
            
        else
            cout <<"Scientific Error!" << endl;

        break;

    default:
        break;
    }

    return 0;
}