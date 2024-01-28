//RAN MIZRAHI 314809625
//NumClass.h

#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int);

/* will return if a number is a palindrome */
int isPalindrome(int);

/* will return if a number is prime*/
int isPrime(int);

/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int);

//A helper function that accepts a number and returns its factorial
int factorial(int); 

/* A helper function to count the number of digits in a number */
int countDigits(int);

//A helper function that get a base and an exponent and returns the result of the base to the power of the exponent
int myPow(int base, int exponent);

//A helper function that get a base and an exponent and returns the result of the base to the power of the exponent (Rec)
int powRec(int base, int exponent);

/* A helper function to count the number of digits in a number (Rec)*/
int countDigitsRec(int num);

/* Helper function for recursive palindrome check */
int isPalindromeRecursiveHelper(int num, int digits);

/* Helper function for recursive Armstrong number check */
int isArmstrongRecursiveHelper(int num, int digits);
