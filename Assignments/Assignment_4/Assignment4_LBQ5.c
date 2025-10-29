//A program which accepts number from user and return difference between summation of all its  factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    
    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {

            iSum = iSum + iCnt;
        }
        else
        {
            iDiff = iDiff + iCnt;
        }
    }
    return (iSum - iDiff);


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}