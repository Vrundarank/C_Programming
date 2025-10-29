//Check whether The year is leap year or not

#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year % 2) == 0)
    {
        printf("The year %d is Leap year ! \n",year);
    }
    else
    {
        printf("The year %d is not a Leap year ! \n",year);
    }

}

int main()
{
    int yr;

    printf("Enter a year : ");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;

}