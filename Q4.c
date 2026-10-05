#include <stdio.h>
int main() {
    int code;
    int revcode = 0;
    int num;
    int original;

    printf("Enter your library book code: ");
    scanf("%d", &code);

    original = code;

    while(code != 0)
    {
        num = code % 10;
        revcode = (revcode * 10) + num;
        code = code / 10; 

    }

    if (original == revcode)
    {
        printf("The code is a palindrome");
    }
    else
    {
        printf("The code is not a palindrome");
    }
    

    return 0;
}