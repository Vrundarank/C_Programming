//A program which accepts range from user and Display addition of all numbers in between that range(Range should Contain all positive numbers )


#include<stdio.h>

int RangeSumDisplay(int iStart , int iEnd)
{
    int iNo = 0;
    int iSum = 0;
    if((iStart > iEnd) || (iStart < 0))
    {
        return -1;
        // Range Cannot be Negative   
    }
    for(iNo = iStart; iNo <= iEnd ; iNo++)
    {
        iSum = iSum + iNo;
    }
    return iSum;
}//Time Complexity is O(N)


int main()
{
	int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
	printf("Enter starting point: ");
	scanf("%d", &iValue1);

	printf("Enter ending point: ");
	scanf("%d", &iValue2);

	iRet = RangeSumDisplay(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range !!\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 23     	Input2: 30     Output: 212
//    Input1: 10     	Input2: 18     Output: 126
//    Input1: -10   	Input2: 2      Output: Invalid Range
//    Input1: 33    	Input2: 12     Output: Invalid Range
//    Input1: 6    	 	Input2: 10     Output: 40
//
/////////////////////////////////////////////////////////////////////////

