#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountDiff
//    Description:      It used to return difference between sum of even and odd digits of a number  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
	int iDigit = 0, iEven = 0, iOdd = 0, iDiff = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iEven = iEven + iDigit;
		}
		else
		{
			iOdd = iOdd + iDigit;
		}
		iNo = iNo / 10;
	}
	iDiff = iEven - iOdd;

	return iDiff;
}// time complexity: O(N)

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter a number: ");
	scanf("%d", &iValue);

	iRet = CountDiff(iValue);
	
	printf("%d\n", iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395   	   Output: -15
//    Input2: 1018         Output: 6
//    Input3: 8440         Output: 16
//    Input4: 5773         Output: -22 
//    Input5: -5773        Output: -22
//
/////////////////////////////////////////////////////////////////////////////////////////////////