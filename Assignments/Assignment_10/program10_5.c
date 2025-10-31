// A program which accepts area in Squarefeet and convert it into square meter 
//  (1 Squarefeet = 0.0929 SquareMeter)

/*
    Input  :  5 
    Output :  0.464515

    Input  :  7 
    Output :  0.650316
*/

#include <stdio.h>

double SquareMeter(int iValue)
{
	double dSquare = 0.0;

	if(iValue < 0)
	{
		iValue = -iValue;
	}

	dSquare = (double)iValue / 10.764; 	// 10.764 -- Source Google
										// if We use 0.0929 as provided in question Throws Unusual Output 
	return dSquare;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;

	printf("Enter area in square feet: ");
	scanf("%d", &iValue);

	dRet = SquareMeter(iValue);

	printf("Area in square meter is %lf\n", dRet);
	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	1			Output:	0.092902 
//	Input1:	5			Output: 0.464511
//	Input1:	-5			Output: 0.464511	
//	Input1:	8			Output:	0.743218
//
/////////////////////////////////////////////////////////////////////////