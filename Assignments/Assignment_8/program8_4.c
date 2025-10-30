//A program which accpets a number from user and displays its table

#include <stdio.h>

void Table(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10 ; iCnt++)
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
//	Input1:	8 			Output: 8 16 24 32 40 48 56 64 72 80
//	Input2:	-8			Output: 8 16 24 32 40 48 56 64 72 80
//	Input3:	12			Output:	12 24 36 48 60 72 84 96 108 120
//	Input3:	4			Output:	4 8 12 16 20 24 28 32 36 40
//
/////////////////////////////////////////////////////////////////////////