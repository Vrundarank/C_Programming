#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and returns the difference between Frequency of even numbers and odd numbers  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{

    int iEven = 0 , iOdd = 0 , iEvenCount = 0, iOddCount = 0;

    for(iEven = 0; iEven < iLength ; iEven++)
    {
        if((Arr[iEven] % 2) == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }

    return iEvenCount - iOddCount;
	
}// time complexity: O(N)


int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0 ;
    int *p = NULL; 

    printf("Enter Number of elements : \n ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
     
    if(p == NULL)
    {
        printf("Memory Allocation Failed...\n");
        return -1;
    }

    printf("Enter the elements  \n",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the %d element : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("There difference is %d ", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 85 66 3 80 93 88 90        Output: 1  
//    Input2: 1 2 3 4 5                	 Output: -1
//
/////////////////////////////////////////////////////////////////////////////////////////////////