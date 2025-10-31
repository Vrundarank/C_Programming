// A program which accepts Distance in Kilometer and Converts it into Meter

/*
    Input  :  5
    Output :  5000

    Input  :  12
    Output :  12000    
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	return (iNo * 1000);
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter distance: ");
	scanf("%d", &iValue);

	iRet = KMtoMeter(iValue);

	printf("Distance in meters is %d\n", iRet);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	5			Output: 5000
//	Input1:	10			Output: 10000
//	Input1:	15			Output: 15000	
//	Input1:	-5			Output:	5000
//
/////////////////////////////////////////////////////////////////////////