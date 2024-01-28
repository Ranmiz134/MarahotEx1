//RAN MIZRAHI 314809625
//basicClassFication.c

#include <stdio.h>
#include "NumClass.h"

//The function accepts a number and returns 1 if it is prime, 0 otherwise.
int isPrime(int num)
{
    int i;
    //If the number is less than 1, it is not prime
    if (num < 1) 
    {
        return FALSE; 
    }

    // If the number is divisible by any number between 2 and sqrt(num), it's not prime
    for (i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return FALSE; 
        }
    }

    //else, (no divisors were found), the number is prime
    return TRUE; 
}

//The function get a number and returns 1 if it is a strong number, otherwise, 0
int isStrong(int num)
{
    int originalNum = num, sum = 0, digit;

    while (num > 0) 
    {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

//A helper function that get a number and returns its factorial
int factorial(int num) 
{
    if (num == 0 || num == 1) 
    {
        return TRUE;
    }
         
    return num * factorial(num - 1);
}
