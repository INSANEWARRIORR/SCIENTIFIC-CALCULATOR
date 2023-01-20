#include <bits/stdc++.h>

using namespace std;

void addition();
void subtraction();
void division();
void multiplication();
void factorial();
void square();
void cube();
void squareroot();
void power();

int main()
{
    cout << "\t\tWELCOME TO THE SCIENTIFIC CALCULATOR!!\n"
         << endl;
    cout << "*******ENTER 0 TO END THE PROGRAM*******\n"
         << endl;
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Division \n";
    cout << "Enter 4 for Multiplication \n";
    cout << "Enter 5 for Factorial \n";
    cout << "Enter 6 for Square \n";
    cout << "Enter 7  for Cube \n";
    cout << "Enter 8  for Squareroot \n";
    cout << "Enter 9 for Power \n";
    int choice;
    while (1)
    {
        cout << "Enter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            division();
            break;
        case 4:
            multiplication();
            break;
        case 5:
            factorial();
            break;
        case 6:
            square();
            break;
        case 7:
            cube();
            break;
        case 8:
            squareroot();
            break;
        case 9:
            power();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\n*******Enter valid choice*******\n\n";
            break;
        }
    }
    return 0;
}

void addition()
{
    cout << "Enter first number : ";
    float X;
    cin >> X;
    cout << "Enter second number you want to add : ";
    float Y;
    cin >> Y;
    cout << "The addition of " << X << " and " << Y << " is " << X + Y << endl;
}

void subtraction()
{
    cout << "Enter first number : ";
    float X;
    cin >> X;
    cout << "Enter second number you want to subtarct : ";
    float Y;
    cin >> Y;
    cout << "The subtraction of " << X << " and " << Y << " is " << X - Y << endl;
}

void division()
{
    cout << "Enter first numbers you want to divide : ";
    float X;
    cin >> X;
    cout << "Enter second number that you want to divide by : ";
    float Y;
    cin >> Y;
    cout << "The division of " << X << " and " << Y << " is " << X / Y << endl;
}

void multiplication()
{
    cout << "Enter the numbers you want to multipliation: ";
    float X, Y;
    cin >> X >> Y;
    cout << "The multiplication of " << X << " and " << Y << " is " << X * Y << endl;
}

void factorial()
{
    cout << "Enter the number you want the factorial of: ";
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
}

void square()
{
    cout << "Enter the number you want the sqaure of: ";
    double s;
    cin >> s;
    double p = pow(s, 2);
    cout << "The square of " << s << " is " << p << endl;
}

void cube()
{
    cout << "Enter the number you want the cube of: ";
    double c;
    cin >> c;
    double p = pow(c, 3);
    cout << "The cube of " << c << " is " << p << endl;
}

void squareroot()
{
    cout << "Enter the number you want the square root of: ";
    double n;
    cin >> n;
    double squareRoot = sqrt(n);
    cout << "The Square root of " << n << " is " << squareRoot << endl;
}

void power()
{
    cout << "Enter the base : ";
    double b;
    cin >> b;
    cout << "Enter the exponent : ";
    double e;
    cin >> e;
    double p = pow(b, e);
    cout << "The solution for base " << b << " and exponent " << e << " is " << p << endl;
}

/*
************************************************************
*                      CODE  BY                            *
*                   PRIYANSH  SETH                         *
*                                                          *
************************************************************
*/