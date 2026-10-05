#include <stdio.h>
int main() {
    int number;
    int digit;
    int revnum = 0;

    printf("Enter your ticket number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = number % 10;
        revnum = (revnum * 10) + digit;
        number = number / 10; 

    }

    printf("Reversed number = %d", revnum);

}