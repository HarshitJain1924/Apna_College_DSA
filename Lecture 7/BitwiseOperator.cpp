#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 9;
    cout << (a & b) << endl;  // 1
    cout << (a | b) << endl;  // 13
    cout << (a ^ b) << endl;  // 12
    cout << (~a) << endl;     // -6
    cout << (a << 1) << endl; // 10
    cout << (b >> 1) << endl; // 4
    return 0;
}

// bitwise operators
//  & - bitwise AND
//  The bitwise AND operator (&) returns 1 if both bits are 1, otherwise 0. In this case, 5 & 9 is 1.
// 0 & 0 = 0
// 0 & 1 = 0
// 1 & 0 = 0
// 1 & 1 = 1

// | - bitwise OR
// The bitwise OR operator (|) returns 1 if either bit is 1, otherwise 0. In this case, 5 | 9 is 13.
// 0 | 0 = 0
// 0 | 1 = 1
// 1 | 0 = 1
// 1 | 1 = 1

// ^ - bitwise XOR
// The bitwise XOR operator (^) returns 1 if the bits are different, otherwise 0. In this case, 5 ^ 9 is 12.
// 0 ^ 0 = 0
// 0 ^ 1 = 1
// 1 ^ 0 = 1
// 1 ^ 1 = 0

// ~ - bitwise NOT
// The bitwise NOT operator (~) inverts the bits. In this case, ~5 is -6.
// ~0 = 1
// ~1 = 0

// << - left shift
// The left shift operator (<<) shifts the bits to the left by the specified number of positions. In this case, 5 << 1 is 10. (a << b) is equivalent to a * 2^b.
// 5 << 1 = 10
// 5 << 2 = 20
// 5 << 3 = 40

// >> - right shift
// The right shift operator (>>) shifts the bits to the right by the specified number of positions. In this case, 9 >> 1 is 4. (a >> b) is equivalent to a / 2^b.
// 9 >> 1 = 4
// 9 >> 2 = 2
// 9 >> 3 = 1
