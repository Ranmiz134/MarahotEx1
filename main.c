//RAN MIZRAHI 314809625
//main.c

#include <stdio.h>
#include "NumClass.h"

int main() 
{
    int start, end;
    
    // Get two positive integers from the user
    //printf("Enter the first positive integer: ");
    scanf("%d", &start);

    //printf("Enter the second positive integer: ");
    scanf("%d", &end);


    // Print Armstrong numbers
    printf("The Armstrong numbers are:");
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // Print palindromes
    printf("The Palindromes are:");
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // Print prime numbers
    printf("The Prime numbers are:");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }

    
    printf("\n");

    // Print strong numbers
    printf("The Strong numbers are:");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
