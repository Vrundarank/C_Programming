////A program which accpets a number from user and displays its table in reverse order 

#include <stdio.h>

void Table(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1 ; iCnt--)
    {
        iSum = (iNo * iCnt);
        printf("%d\t",iSum);
    }

} // Time Complexity O (N)

int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}


/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1:	2 			Output: 20 18 16 14 12 10 8 6 4 2
//	Input2:	-8			Output: 80 72 64 56 48 40 32 24 16 8
//	Input3:	12			Output:	120 108 96 84 72 60 48 36 24 12
//	Input3:	4			Output:	40 36 32 28 24 20 16 12 8 4
//
/////////////////////////////////////////////////////////////////////////