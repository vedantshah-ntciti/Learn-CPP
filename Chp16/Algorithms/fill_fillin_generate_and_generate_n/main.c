#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int *, int);
void printArray(int *, int);

int main()
{
    int array1[] = { 1,2,3,2,1 };
    int array2[] = { 1,2,3,4 };
    int array3[] = {};

    printArray(array1 , sizeof(array1) / sizeof(int));
    printf("\t%d\n" , isPalindrome(array1, sizeof(array1) / sizeof(int)));
    printArray(array2 , sizeof(array2) / sizeof(int));
    printf("\t%d\n" , isPalindrome(array2, sizeof(array2) / sizeof(int)));
    printArray(array3 , sizeof(array3) / sizeof(int));
    printf("\t%d\n" , isPalindrome(array3, sizeof(array3) / sizeof(int)));

    printf("\n");
    return 0;
}

bool isPalindrome(int *arrayPointer , int arraySize)
{
    int L = 0 , R = arraySize - 1;
    if (arraySize <= 1)
    {
        return true;
    }

    while ( L < R )
    {
        if (arrayPointer[L] != arrayPointer[R])
        {
            return false;
        }
        ++L;
        --R;
    }
    return true;
}

void printArray(int *arrayPointer , int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf(" %d" , arrayPointer[i]);
    }
    printf(" ");
}
