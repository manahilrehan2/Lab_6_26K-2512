#include <stdio.h>
int main() {
    int array[20];
    int i = 0;
    int smallest, largest;
    int searchNum;
    int InsertNum, Index;
    int DeleteNum;

    
    //inputs all 8 elements from the user
    for (i = 0; i < 8; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &array[i]);
    }


    //prints the array
    printf("Array: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }

    //finding largest and smallest element
    largest = array[0];
    smallest = array[0];

    for (i = 0; i < 8; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
        
    }
    printf("\nLargest number = %d", largest);
    printf("\nsmallest number = %d", smallest);

    //Searching a number 
    printf("\nEnter number to search: ");
    scanf("%d", &searchNum);

    for (i = 0; i < 8; i++)
    {
        if (array[i] == searchNum)
        {
            printf("Number found at index %d", i);
        }
        
    }

    //inserting a number at an index
    printf("\nEnter number to insert: ");
    scanf("%d", &InsertNum);

    printf("Enter index for insertion (0 to 7): ");
    scanf("%d", &Index);

    for (i = 8; i > Index; i--)
    {
        array[i] = array[i - 1];
    }
    array[Index] = InsertNum;

    //deleting a number
    printf("\nEnter index to delete (0 to 8): ");
    scanf("%d", &DeleteNum);

    for (i = DeleteNum; i < 8; i++)
    {
        array[i] = array[i + 1];
    }

    printf("Final array: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", array[i]);
    }




    

    return 0;
}