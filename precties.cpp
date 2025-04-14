#include <iostream>
using namespace std;

int main()
{
    int number;
    int a;
    cout << "Enter a number" << endl;
    cin >> number;

    int r = 0;

    while (number > 0)
    {
        a = number % 10;
        r = r * 10 + a;
        number = number / 10;
    }

    cout << "Reversed number: " << r << endl;

    return 0;
}



