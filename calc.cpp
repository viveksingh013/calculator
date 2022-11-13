#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b;
    float select;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    float add = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = float(a / b);
    cout << "\nEnter the choice of your program : " << endl;
    cout << "1 = addition" << endl;
    cout << "2 = subtraction" << endl;
    cout << "3 = multiplication" << endl;
    cout << "4 = division" << endl;
    cout << "\nenter your choice : ";
    cin >> select;
    if (select == 1)
    {
        cout << endl
             << "Addition : " << add;
    }
    else if (select == 2)
    {
        cout << endl
             << "Subtraction : " << sub;
    }
    else if (select == 3)
    {
        cout << endl
             << "Multiplication : " << mul;
    }
    else if (select == 4)
    {
        cout << endl
             << setprecision(2) << "Division : " << div;
    }
}