//Accept one number from user and print that number of * on screen  In a Decremental approach using while loop.

#include <stdio.h>

void Display(int iNo)
{
    //Updater
    if(iNo <= 0)
    {
        return ;
    }
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}