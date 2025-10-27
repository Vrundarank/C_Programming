//Accept one  number from the user and print that number of * on screen using loop.
#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //Updater
    if(iNo <= 0)
    {
        return ;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
