// A program which accepts radius of circle from users and calculate its area . Consider value of PI is 3.14 (Area = PI * Radius * Radius)

/* 
      Input  :  5.3
      Output :  88.2026

      Input  :  10.4
      Output :  339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0;
    
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    Area = PI * fRadius * fRadius;
    
    return Area;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The area of Circle is : %f ",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 5.3				Output: 88.2026
//	Input2:	10.4			Output: 339.6224
//	Input3:	7.2				Output:	162.7776
//	Input4: -7.2			Output:	162.7776
//	Input4: 6.9				Output:	149.4954
//
/////////////////////////////////////////////////////////////////////////