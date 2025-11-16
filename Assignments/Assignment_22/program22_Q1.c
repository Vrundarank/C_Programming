#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and returns the Frequency of even numbers.  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             15/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[],int iLength)
{

    int iNo = 0 ,  iCount = 0;

    for(iNo = 0; iNo < iLength ; iNo++)
    {
        if((Arr[iNo] % 2) == 0)
        {
            iCount++;
        }
    }
	return iCount;
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

    printf("Enter the elements \n",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the %d element",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("There are  %d Even elemnets in the Entered Numbers\n",iRet); // I thought this print statement will be Relevant to the output 

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 1 2 3 4 5        Output: 2
//    Input2: 0 1 2 3 4        Output: 3
//    Input3: -1 -2 0 3 5	   Output: 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////