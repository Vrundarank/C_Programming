//Accept two number from user and Display first number in Second number of times.

#include<stdio.h>

 void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    //updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency; 
    }

    for(iCnt = 0; iCnt < iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter The number : ");
    scanf("%d",&iValue);

    printf("Enter The frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}