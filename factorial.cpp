#include <iostream>
using namespace std;

int main()
{
    int no;

    cout << "Enter a number: ";
    cin >> no;

    int fact = 1;

    for(int i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of given number is: " << fact << endl;

    return 0;
}