#include <iostream>
#include <math.h>
using namespace std;

unsigned unsetRightmostBit(unsigned n)
{
    return n & (n - 1);
}

bool isPowerOfTwo(unsigned n)
{
    return !(n & (n - 1));
}

int positionOfSetBit(int n)
{
    // unset the rightmost bit and check if the number is non-zero
    if (n & (n - 1))
    {
        cout << "Wrong input";
        return 1;
    }
 
    return log2(n) + 1;
}

bool findParity(unsigned n)
{
    bool parity = false;
    // run till `n` becomes 0
    while (n)
    {
        // invert the parity flag
        parity = !parity;
 
        // turn off the rightmost set bit
        n = n & (n - 1);
    }
    return parity;
}

int main() 
{   
    // unset rightmost set bit
    int n1 = 20;
    cout << n1 << " in binary is " << bitset<8>(n1) << endl;
    n1 = unsetRightmostBit(n1);
    cout << "After unsetting rightmost bit " << bitset<8>(n1) << endl;

    // check if power of 2
    int n2 = 16;
    if (isPowerOfTwo(n2)) {
        cout << n2 << " is a power of 2" << endl;
    } 
    else {
        cout << n2 << " is not a power of 2" << endl;
    }

    // find the position of the only set bit og the number
    int n3 = 16;
 
    cout << n3 << " in binary is " << bitset<8>(n3) << endl;
    cout << "The position of the only set bit is " << positionOfSetBit(n3) << endl;

    // check parity of a number
    unsigned int n4 = 31;
    cout << n4 << " in binary is" << bitset<8>(n4) << endl;
    if (findParity(n4)) {
        cout << "The parity of " << n4 << " is odd" << endl;
    }
    else {
        cout << "The parity of " << n4 << " is even" << endl;;
    }

    return 0;
}