// write a c progrem to check the year is leap year or not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");
    }
    return 0;
}
