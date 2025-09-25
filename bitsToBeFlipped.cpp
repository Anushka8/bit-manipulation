#include <iostream>
using namespace std;

int main() 
{
    int x = 16;
    int y = 13;

    cout << x << " in binary is " << bitset<8>(x) << endl; 
    cout << y << " in binary is " << bitset<8>(y) << endl; 
    
    int n = x ^ y;
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }

    cout << "\nThe total number of bits to be flipped is " << count << endl;

    return 0;
}