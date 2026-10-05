#include <stdio.h>
int main() {
    int number;
    int digit;
    int even = 0;
    int odd = 0;

    printf("Enter your meter readings: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = number % 10;
        if (digit % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
        
        number = number / 10; 

    }

    printf("Number of even digits: %d\n", even);
    printf("Number of odd digits: %d", odd);


    return 0;
}