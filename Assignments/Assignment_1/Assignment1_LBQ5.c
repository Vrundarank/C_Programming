//Accept one Number from user and print that number of * on screen 

#include<stdio.h>

int Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iNo ; iCnt++)
    {
        printf("*");
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter any Number : ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}