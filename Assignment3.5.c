#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

// Function to check whether a character is a vowel
BOOL ChkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' || ch == 'O' ||
        ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf(" %c", &cValue);

    // Call the function
    bRet = ChkVowel(cValue);

    // Check the return value
    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}