#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    DigitsSum
//    Description:      Prints sum of individual elements digits in an array   
//    Input:            int *, int  
//    Output:           int  
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0, iDigit = 0, iSum = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum = iSum + iDigit;
			Arr[iCnt] = Arr[iCnt] / 10;
		}

		printf("%d ", iSum);
		iSum = 0;
	}
	
	printf("\n");
}


int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements: ");
	scanf("%d", &iSize);

	p = (int *)malloc(iSize * sizeof(int));

	if(NULL == p)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter %d elements\n", iSize);

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d: ", iCnt);
		scanf("%d", &p[iCnt]);
	}

	DigitsSum(p, iSize);

	free(p);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5 elements → 123 456 789 10 5      Output: 6 15 24 1 5
//    Input2:  4 elements → 100 200 300 400       Output: 1 2 3 4
//    Input3:  3 elements → 11 22 33              Output: 2 4 6
//    Input4:  6 elements → 9 99 999 123 321 111  Output: 9 18 27 6 6 3
//    Input5:  2 elements → 5 50                  Output: 5 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////