//Write a program to find Odd Factorial of given Number

#include <stdio.h>

int FactorialDiff(int iNo)
{
	int iCnt = 0;
	int iFactor1 = 1 , iFactor2 = 1;
    int iDiff = 0, iSum1 = 0, iSum2 = 0;
 

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		if(iCnt % 2 != 0)
		{
			iFactor1 = iFactor1 * iCnt;
		}
        iSum1 = iFactor1;
	}
    for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		if(iCnt % 2 == 0)
		{
			iFactor2 = iFactor2 * iCnt;
		}
        iSum2 = iFactor2;
	}
    iDiff = iSum2 - iSum1;

    return iDiff;


}// Time complexity: O(N)

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	iRet = FactorialDiff(iValue);

	printf("Factorial Difference is  %d\n",iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 5			Output: Factorial difference is -7
//	Input2:	-5			Output: Factorial difference is -7
//	Input3:	10			Output:	Factorial difference is 2895
//
/////////////////////////////////////////////////////////////////////////