//RAN MIZRAHI 314809625
//advancedClassificationRecursion.c

#include <stdio.h>
#include "NumClass.h"

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num)
{
    int digits = countDigitsRec(num);
    if(isArmstrongRecursiveHelper(num, digits) == num)
    {
        return TRUE;
    }

    return FALSE;
}

/* will return if a number is a palindrome */
int isPalindrome(int num)
{
    int digits = countDigitsRec(num);
    return isPalindromeRecursiveHelper(num, digits);
}

//A helper function that get a base and an exponent and returns the result of the base to the power of the exponent (Rec)
int powRec(int base, int exponent) 
{
    if (exponent < 0) 
    {
        return 0; 
    }

    else if (exponent == 0) 
    {
        return 1;
    }

    else 
    {
        return base * powRec(base, exponent - 1);
    }
}

/* A helper function to count the number of digits in a number (Rec) */
int countDigitsRec(int num) 
{
    if (num == 0) 
    {
        return 0;
    }

    return 1 + countDigitsRec(num / 10);
}

/* Helper function for recursive palindrome check */
int isPalindromeRecursiveHelper(int num, int digits) 
{
    //Single digit numbers are palindromes
    if (digits <= 1) 
    {
        return TRUE;  
    }

    int firstDigit = num / powRec(10, digits - 1);
    int lastDigit = num % 10;

    //Not a palindrome if the first and last digits are different
    if (firstDigit != lastDigit) 
    {
        return FALSE;  
    }

    // Recursive call with the remaining number
    return isPalindromeRecursiveHelper((num % powRec(10, digits - 1)) / 10, digits - 2);
}

/* Helper function for recursive Armstrong number check */
int isArmstrongRecursiveHelper(int num, int digits) 
{
    if (num == 0) 
    {
        return FALSE;  // Armstrong numbers should have at least one digit
    }

    int digit = num % 10;
    int remainingDigits = num / 10;

    return powRec(digit, digits) + isArmstrongRecursiveHelper(remainingDigits, digits);
}
