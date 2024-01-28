//RAN MIZRAHI 314809625
//advancedClassificationLoop.c

#include <stdio.h>
#include "NumClass.h"

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num)
{
    int originalNum = num, sum = 0, numberOfDigits = countDigits(num), digit; 
    while (num > 0) 
    {
        digit = num % 10;
        sum += myPow(digit, numberOfDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

/* will return if a number is a palindrome */
int isPalindrome(int num)
{
    int originalNum = num, reversedNum = 0, digit;

    while (num > 0) 
    {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

/* A helper function to count the number of digits in a number */
int countDigits(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }

    return count;
}

//A helper function that get a base and an exponent and returns the result of the base to the power of the exponent
int myPow(int base, int exponent) 
{
    if (exponent < 0) 
    {
        return 0;  
    } 

    else 
    {
        int result = 1, i;
        for (i = 0; i < exponent; i++) 
        {
            result *= base;
        }

        return result;
    }
}
