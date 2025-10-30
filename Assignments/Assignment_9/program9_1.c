//a Program which accepts number from user and Display below pattern 

/*
     Input   : 5 
     Output  : *    *   *   *   *   #   #   #   #   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
    }  
} // Time Complexity O (N)

//It might can be written using nested loop but didn't get kasa lehela pahije , mhanun 2 seperate for loops vaprun lehelay desired output yetay still !

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 3			Output: * * * # # #
//	Input2:	-3			Output: * * * # # #
//	Input3:	8			Output:	* * * * * * * * # # # # # # # #
//
/////////////////////////////////////////////////////////////////////////