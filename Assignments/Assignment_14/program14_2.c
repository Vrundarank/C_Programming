// A Program which checks whether the number contains 0 Digit in it or Not 
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CheckZero
//    Description:      It used to whether a number contains 0 in it or not  
//    Input:            Integer  
//    Output:           Boolean/Integer (technically its returning integer)
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
	int iDigit = 0;

	if(iNo == 0)
	{
		return TRUE;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			return TRUE;
			break;
		}
		iNo = iNo / 10;
	}
}


int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter a number: ");
	scanf("%d", &iValue);

	bRet = CheckZero(iValue);

	if(bRet == TRUE)
	{
		printf("It contains zero\n");
	}
	else
	{
		printf("There is no zero\n");
	}

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395        Output: There is no zero
//    Input2: 1018        Output: It contains zero 
//    Input3: 9000        Output: It contains zero
//    Input4: 10687       Output: It contains zero
//    Input5: 0           Output: It contains zero
//    Input5: 1           Output: There is no zero
//    Input5: 6969        Output: There is no zero
//
/////////////////////////////////////////////////////////////////////////////////////////////////