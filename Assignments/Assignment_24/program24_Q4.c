#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Digits
//    Description:      Displays 3 digits numbers present in array  
//    Input:            int *, int  
//    Output:           int  
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
		{
			printf("%d ", Arr[iCnt]);
		}
		else if((Arr[iCnt] >= -999) && (Arr[iCnt] <= -100))
		{
			printf("%d ", Arr[iCnt]);
		}
	}

	// or apan tya number la divide karu shakto
	// ani to teen vela divide zhalay ka te count karu shakto
	// i hope tumhi he answer expect karat hote
	// pan mazha solution thoda soppa vatla mala

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

	Digits(p, iSize);

	free(p);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5 elements → 10 150 250 50 999       Output: 150 250 999
//    Input2:  6 elements → -5 -150 -999 100 50 0   Output: -150 -999 100
//    Input3:  4 elements → 42 7 8 9                Output: 
//    Input4:  5 elements → 123 234 345 456 567     Output: 123 234 345 456 567
//    Input5:  6 elements → -123 -234 -12 -1 0 999  Output: -123 -234 999
//
/////////////////////////////////////////////////////////////////////////////////////////////////
