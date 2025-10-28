//A program which accepts number from user and returnsummation of all its Non-factors

#include<stdio.h>

int DisplaySumOfNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2, iCnt = iSum)
    {
        if((iNo % iCnt) != 0)
        {

            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DisplaySumOfNonFactors(iValue);

    printf("The Sum of Non-Factors of number %d is %d \n",iValue,iRet);

    return 0;

}