// A Program which checks whether the number contains 0 Digit in it or Not 
#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountTwo
//    Description:      It used to check number of occurance of 2 in the Number 
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
	int iDigit = 0;
    int iFreq = 0;


	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 2)
		{
            iFreq = iFreq + 1;
		}
		iNo = iNo / 10;
	}
    return iFreq;
}


int main()
{
	int iValue = 0;
    int iRet = 0;

	printf("Enter a number: ");
	scanf("%d", &iValue);

	iRet = CountTwo(iValue);

    printf("%d\n", iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395        Output: 1
//    Input2: 1018        Output: 0
//    Input3: 9000        Output: 0
//    Input4: 922432      Output: 3
//    Input5: 2        	  Output: 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////