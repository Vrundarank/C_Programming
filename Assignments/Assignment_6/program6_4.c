//A program which accepts 3 numbers and print its Multiplication

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo2 == 0)
    {
        return(iNo1 * iNo3);
    }
    else 
    {
        return(iNo1 * iNo2 * iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please Enter three Numbers : ");
    
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The Multiplication of numbers %d %d and %d is : %d",iValue1,iValue2,iValue3,iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	5		Input2:	4		Input3:	7		Output:	140 
//	Input1:	5		Input2:	0		Input3:	7		Output:	35
//	Input1:	5		Input2:	0		Input3:	0		Output:	5
//	Input1:	0		Input2:	0		Input3:	0		Output:	0
//	Input1:	2		Input2:	5		Input3:	8		Output:	80 
//
/////////////////////////////////////////////////////////////////////////