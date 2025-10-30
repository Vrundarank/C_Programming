// A program which accepts N from user and print all odd numbers upto N

/* 
     Input  :   18
     Output :   1    3    5    7    9    11    13     17
*/

#include<stdio.h>

void  DisplayOdd(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo =  -iNo;
    }

    for(iCnt = 0; iCnt < iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}


int main()
{
    int iValue = 0;
    printf("Enter any number : ");
    scanf("%d",&iValue);

    DisplayOdd(iValue);
}


