
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Difference
//    Description:      Returns difference between even and odd elements in an array  
//    Input:            int *, int  
//    Output:           int  
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iEven = 0, iOdd = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEven = iEven + Arr[iCnt];
		}
		else
		{
			iOdd = iOdd + Arr[iCnt];
		}
	}

	return (iEven - iOdd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
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

	printf("Result is %d\n", iRet);

	free(p);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  [1, 2, 3, 4]          Output: 2
//    Input2:  [10, 20, 30]          Output: 60
//    Input3:  [5, 7, 9]             Output: -21
//    Input4:  [2, 4, 6, 8, 10]      Output: 30
//    Input5:  [11, 14, 3, 8, 5]     Output: 3
//
/////////////////////////////////////////////////////////////////////////////////////////////////
