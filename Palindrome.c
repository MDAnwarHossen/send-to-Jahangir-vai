#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    fgets(S, 1001, stdin);
    int len = strlen(S);

    int isPalindrome = 1; // The initial value is true (1). However, if we encounter any mismatches during the while loop, we will change it to false (0).

    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        if (S[i] != S[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}