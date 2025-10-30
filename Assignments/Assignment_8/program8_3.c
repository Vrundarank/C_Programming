//Write a program to find factorial of a given number

#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iSum = 1;
    
    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        iSum = iSum * iCnt;
    }
    return iSum;

}// Time Complexity O (N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number %d  is %d ",iValue,iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 5			Output: Factorial of number is 120
//	Input2:	-5			Output: Factorial of number is 120
//	Input3:	4			Output:	Factorial of number is 24
//	Input3:	1			Output:	Factorial of number is 1
//	Input3:	0			Output:	Factorial of number is 1
//
/////////////////////////////////////////////////////////////////////////