/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Display
//    Description:      Displays elements in an array which are divisible by 5 and are even
//    Input:            int *, int  
//    Output:           int  
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
		{
			printf("%d ", Arr[iCnt]);
		}
	}

	printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

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

	Display(p, iSize);

	free(p);

	return 0;
}