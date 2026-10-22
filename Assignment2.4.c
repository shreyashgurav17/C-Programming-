#include<stdio.h>

int Display(int iNo, int Frequency)
{
     int iCount = 0;
    for(iCount=1; iCount<= Frequency; iCount++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}