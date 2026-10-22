#include<stdio.h>

void Display(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Hello...");
    }
    else
    {
        printf("Demo...");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    return 0;
}