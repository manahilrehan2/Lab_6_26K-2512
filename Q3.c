#include <stdio.h>
int main() {
    int present = 0;
    int absent = 0;
    int status;

    for (int i = 1; i <= 15; i++)  //using two students per iteration
    {
        //for first student
        printf("Enter 1 if student is present and 0 if absent: ");
        scanf("%d", &status);

        if (status == 1)
        {
            present = present + 1;
        }

        //for second student
        printf("Enter 1 if student is present and 0 if absent: ");
        scanf("%d", &status);

        if (status == 1)
        {
            present = present + 1;
        }
    }

    absent = 30 - present;

    printf("Number of students present %d\n", present);
    printf("Number of students absent %d", absent);
    
    
}