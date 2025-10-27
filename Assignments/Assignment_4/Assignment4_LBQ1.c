//Write a program which accepts number from user and display multiplication of factors

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo / 2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {

            printf("%d",iCnt);
        }
    }
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;

}