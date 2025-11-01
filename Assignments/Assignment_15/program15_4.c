#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    MultDigits
//    Description:      It is used to return multiplication of digits of a number
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
	int iDigit = 0;
	int iMul = 1;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit != 0)
		{
			iMul = iMul * iDigit;			
		}
		iNo = iNo / 10;
	}
	return iMul;
}// time complexity: O(N)

int main()
{
	int iValue = 0;

	printf("Enter a number: ");
	scanf("%d", &iValue);

	printf("%d\n", CountRange(iValue));

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395        Output: 270
//    Input2: 1018        Output: 8
//    Input3: -1018       Output: 8
//    Input4: 944         Output: 144
//    Input5: 1           Output: 0
//    Input5: 92243       Output: 864
//
/////////////////////////////////////////////////////////////////////////////////////////////////