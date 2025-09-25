#include <iostream>
using namespace std;

int turnOn(int n, int k) {
    return n | (1 << (k-1));
}

int turnOff(int n, int k) {
    return n & ~(1 << (k-1));
}

int flipBit(int n, int k) {
    return n ^ (1 << (k-1));
}

int checkBit(int n, int k) {
    return (n & (1 << (k-1))) != 0;
}

int main()
{   
    // turn ON kth bit
    int n1 = 20;
    int k1 = 4;
    cout << "Before: " << n1 << " = " << bitset<8>(n1) << endl;
    n1 = turnOn(n1, k1);
    cout << "After: " << n1 << " = " << bitset<8>(n1) << endl;

    // turn OFF kth bit
    int n2 = 20;
    int k2 = 3;
    cout << "Before: " << n2 << " = " << bitset<8>(n2) << endl;
    n2 = turnOff(n2, k2);
    cout << "After: " << n2 << " = " << bitset<8>(n2) << endl;

    // flip kth bit
    int n3 = 20;
    int k3 = 3;
    cout << "Before: " << n3 << " = " << bitset<8>(n3) << endl;
    n2 = flipBit(n3, k3);
    cout << "After: " << n3 << " = " << bitset<8>(n3) << endl;

    // turn OFF kth bit
    int n4 = 20;
    int k4 = 3;
    if (checkBit(n4, k4)) {
        cout << "k'th bit is set";
    }
    else
    {
        cout << "k'th bit is not set";
    }

    return 0;
}