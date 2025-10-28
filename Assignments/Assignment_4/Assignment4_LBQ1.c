//A program which accepts number from user and display multiplication of factors of that number

#include<stdio.h>

int MultiplicationOfFactors(int iNo)
{
    int iCnt = 0;
    int iBounds = 0;
    int iProduct = 0;

    for(iCnt = 2 ,iProduct = 1, iBounds  = iNo / 2;iCnt <= iBounds; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {

            iProduct = iProduct * iCnt;
        }
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiplicationOfFactors(iValue);

    printf("The Multiplication of Factors of number %d is %d \n",iValue,iRet);

    return 0;

}