// A program which accepts Width and Height of rectangle from user and calculate its area (Area = Width * Height)

/* 
      Input  :  5.3 9.78
      Output :  51.834
*/



#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    float Area = 0;
    
    if(fWidth < 0)
    {
       fWidth  = - fWidth ;
    }
    if(fHeight < 0)
    {
       fHeight  = -fHeight;
    }
    Area =  (fWidth * fHeight); 
    
    return Area;

}

int main()
{
    float Height = 0.0;
    float Width = 0.0;
    double dRet = 0.0;

    printf("Enter Height and Width:");
    scanf("%f %f",&Height,&Width);

    dRet = RectangleArea(Height,Width);

    printf("The area of Rectangle is : %.3f ",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	5.3		Input2:	9.78		Output: 51.834
//	Input1:	6.8		Input2:	2.3			Output: 15.640
//	Input1:	-6.8	Input2:	2.3			Output: 15.640	
//	Input1:	7		Input2:	3			Output:	21.000
//
/////////////////////////////////////////////////////////////////////////