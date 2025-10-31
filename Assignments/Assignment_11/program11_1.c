//A program which accepts range from user and Display all numbers in between that range


#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
    int iNo = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range !!");
    }
    else
    {
        for(iNo = iStart; iNo <= iEnd ; iNo++)
        {
            printf("%d\t",iNo);
        }
        printf("\n");
    }
} // Time Complexity is O(N)


int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter starting point: ");
	scanf("%d", &iValue1);

	printf("Enter ending point: ");
	scanf("%d", &iValue2);

	RangeDisplay(iValue1, iValue2);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 3       	Input2:	9			Output: 3 4 5 6 7 8 9
//    Input1: -3        Input2:	3			Output: -3 -2 -1 0 1 2 3
//    Input1: -3        Input2:	-10			Output: Invalid Range
//
/////////////////////////////////////////////////////////////////////////