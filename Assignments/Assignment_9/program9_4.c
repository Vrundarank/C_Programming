//Write a program to find Odd Factorial of given Number

#include <stdio.h>

int OddFactorial(int iNo)
{
	int iCnt = 0;
	int iFactor = 1;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		if(iCnt % 2 != 0)
		{
			iFactor = iFactor * iCnt;
		}
	}

	return iFactor;
}// Time complexity: O(N)

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	iRet = OddFactorial(iValue);

	printf("Odd factorial of number %d is %d\n", iValue,iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 5			Output: odd factorial of number 5 is 15
//	Input2:	-5			Output: Even factorial of number 5 is 15
//	Input3:	10			Output:	Even factorial of number 10 is 945
//
/////////////////////////////////////////////////////////////////////////