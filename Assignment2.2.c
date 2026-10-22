#include <stdio.h>

void Display(int iNo)
{
    iNo = 0;
    while(iNo > 5)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
