#include <stdio.h>
int main() {
    int pin;
    int num;
    int sum = 0;
    int i = 0;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    while (i<4)
    {
        num = pin % 10;
        sum = sum + num;
        pin = pin/10;
        i = i + 1;
    }
    
    if (sum > 10)
    {
        printf("Strong PIN");
    }
    else{
        printf("Weak PIN");
    }
    
}