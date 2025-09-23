#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    if (x != y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
}

int main() 
{
    // check if the number is even or odd
    int n = 5;
    if (n & 1) {
        cout << n << " odd" << endl;
    }
    else {
        cout << n << " even" << endl;
    }
    

    // if two integers are opposite signs
    int a = 4;
    int b = -5;
    bool isOpposite = (a ^ b) < 0;
    if (isOpposite)
    {
        cout << a << " and " << b << " have opposite signs" << endl;
    }
    else {
        cout << a << " and " << b << " don't have opposite signs" << endl;
    }

    // swap two numbers without using a third variable
    int c = 3;
    int d = 4;

    cout << "Before swapping " << c << " & " << d << endl;
    swap(c, d);
    cout << "Afterswapping " << c << " & " << d << endl;

    return 0;
}