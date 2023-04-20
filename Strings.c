#include <stdio.h>
#include <string.h>

int main()
{
    char A[11];
    char B[11];
    scanf("%s %s", &A, &B);

    int len_A = strlen(A);
    int len_B = strlen(B);
    printf("%d %d\n", len_A, len_B); // The size of the string A and size of the string B separated by a space

    char new_string[len_A + len_B];

    // Copy all string A elements to new_string
    for (int i = 0; i < len_A + len_B; i++)
    {
        new_string[i] = A[i];
    }

    int i = len_A;
    int j = 0;
    // Copy all string B elements to new_string. Starting index will be new_string[i]
    while (j < len_B)
    {
        new_string[i] = B[j];
        i++;
        j++;
    }
    new_string[i] = '\0';
    printf("%s\n", new_string);

    // swapping their first character.
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s", A, B);

    return 0;
}