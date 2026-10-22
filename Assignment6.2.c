#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input\n");
    }
    else if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}