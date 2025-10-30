// A program in US dollar and return its corresponding value in Indian currency Consider 1$ is 70 rupees

/*  
    Input  :    1
    Output :    70

    Input  :    10
    Output :    700

    Input  :    1200
    Output :    84000
*/
#include<stdio.h>

int DollarToInr(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    return iNo * 70;
    
    
} 

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("The Converted Dollar($) %d to Inr(₹) is %d ",iValue,iRet);


    return 0;

}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 1				Output: 70
//	Input2:	3				Output: 210
//	Input3:	1200			Output:	84000
//	Input4: -1200			Output: 84000
//
/////////////////////////////////////////////////////////////////////////