#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is Even number",iNo);
        return TRUE;
    }
    else
    {
        printf("%d is Odd number",iNo);
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = ChkEvent(iValue);

    return 0;
}