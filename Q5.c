#include <stdio.h>
int main() {
    int n;
    int catalan;
    int fact1 = 1;
    int fact2 = 1;
    int fact3 = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    //for factorial of 2n [2n!]
    for (int i = 1; i <= 2 * n; i++)
    {
        fact1 = fact1 * i;
    }
    
    //for factorial of n+1 [(n+1)!]
    for (int i = 1; i <= n + 1; i++)
    {
        fact2 = fact2 * i;
    }


    //for factorial of n [n!]
    for (int i = 1; i <= n; i++)
    {
        fact3 = fact3 * i;
    }

    catalan = fact1 / (fact2 * fact3);

    printf("Catalan number = %d", catalan);

    return 0;
}