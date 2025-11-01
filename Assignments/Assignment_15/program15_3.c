#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountRange
//    Description:      It is used to count of digits of a number in between 3 and 7  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
	int iDigit = 0;
	int iFrequency = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > 3 && iDigit < 7)
		{
			iFrequency++;			
		}
		iNo = iNo / 10;
	}
	return iFrequency;
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
//    Input1: 2395        Output: 1
//    Input2: 1018        Output: 0
//    Input3: -1018       Output: 0
//    Input4: 4521        Output: 2
//    Input5: 9922        Output: 0
//    Input5: 0           Output: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////