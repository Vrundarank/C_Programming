#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Difference
//    Description:      Returns difference between largest and smallest element present in array  
//    Input:            int *, int  
//    Output:           int  
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iMax = 0, iMin = 0;

	for(iMax = Arr[0], iMin = Arr[0], iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}

	return (iMax - iMin);
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
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

	iRet = Difference(p, iSize);

	printf("Difference is %d\n", iRet);

	free(p);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5 elements → 10 20 30 40 50        Output: Difference is 40
//    Input2:  5 elements → -5 -10 -3 -20 -1      Output: Difference is 19
//    Input3:  1 element  → 42                    Output: Difference is 0
//    Input4:  5 elements → 7 7 7 7 7             Output: Difference is 0
//    Input5:  6 elements → 0 -2 15 3 -5 9        Output: Difference is 20
//
/////////////////////////////////////////////////////////////////////////////////////////////////