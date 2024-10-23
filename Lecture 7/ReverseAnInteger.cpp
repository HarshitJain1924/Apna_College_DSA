#include <iostream>

int reverseNumber(int n)
{
    int reversedNumber = 0;

    while (n > 0)
    {
        int digit = n % 10;                                 // Get the last digit
        reversedNumber = (reversedNumber << 1) * 5 + digit; // Shift and add digit
        n /= 10;                                            // Remove the last digit from n
    }

    return reversedNumber;
}

int main()
{
    int number = 123;
    int reversed = reverseNumber(number);
    std::cout << "Reversed number of " << number << " is: " << reversed << std::endl;
    return 0;
}
