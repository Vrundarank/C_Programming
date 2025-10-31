//A program which accepts range from user and Display all even  numbers in between that range


#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iNo = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range ");
        // Range Cannot be Negative   
    }
    else
    {
        for(iNo = iStart; iNo <= iEnd ; iNo++)
        {
            if((iNo % 2) == 0)
            {
                printf("%d\t",iNo);
            }
        }
        printf("\n");
    }
}// Time Complexity is O(N)

int main()
{
	int iValue1 = 0, iValue2 = 0;


	printf("Enter starting point: ");
	scanf("%d", &iValue1);

	printf("Enter ending point: ");
	scanf("%d", &iValue2);

	RangeDisplayEven(iValue1, iValue2);


	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 23     		Input2:	35      	Output:	24 26 28 30 32 34 
//    Input1: 10     		Input2:	18      	Output:	10 12 14 16 18 
//    Input1: 10      		Input2: 12    		Output:	10 12
//    Input1: 69      		Input2: 33      	Output:	Invalid range 
//
/////////////////////////////////////////////////////////////////////////