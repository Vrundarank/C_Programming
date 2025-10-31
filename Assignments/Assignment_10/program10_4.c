// A program which accepts Temperature in Fahrenheit and conver it to into Celcius
//  ((1 Celcius = Fahrenheit -32) * (5/9))

/*
    Input   :  10
    Output  :  -12.2222   (10 - 32) * (5 / 9)

    Input   :  34
    Output  :  1.111111   (34 - 32) * (5 / 9)
*/

#include <stdio.h>

double FhToCs(float fTemp)
{
	float fCelsius = 0.0;
	
	fCelsius = (fTemp - 32) * (5.0/9.0); 

	return fCelsius;
}

int main()
{
	float fValue = 0.0f;
	double dRet = 0.0;

	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &fValue);

	dRet = FhToCs(fValue);

	printf("Temperature in celsius is %lf\n", dRet);
	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	10			Output: -12.222222
//	Input1:	34			Output: 1.111111
//	Input1:	32			Output: 0.000000	
//	Input1:	-32			Output:	-35.555557
//
/////////////////////////////////////////////////////////////////////////