#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountOdd
//    Description:      It is used to count odd digits of a number  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
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
		if(iDigit % 2 != 0)
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

	printf("%d\n", CountOdd(iValue));

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395        Output: 3
//    Input2: 1018        Output: 2
//    Input3: -1018       Output: 2
//    Input4: 9000        Output: 1
//    Input5: 6969        Output: 4
//    Input5: 0           Output: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////