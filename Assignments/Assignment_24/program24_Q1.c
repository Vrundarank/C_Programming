#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accept N number from user and return the largest number.
//    Input:            int * , int 
//    Output:           int
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int Maximum(int Arr[],int iLength)
{
    int  iLargest = 0 , iCnt = 0;

    for(iCnt = 0,  iLargest = Arr[0] ;  iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iLargest)
        {
            iLargest = Arr[iCnt];
        }
    }
    return iLargest;
    
}


int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;
    int *p = NULL; 
    

    printf("Enter Number of elements : \n ");
    scanf("%d",&iSize);
  
    p = (int *)malloc(iSize * sizeof(int));
     
    if(p == NULL)
    {
        printf("Memory Allocation Failed...\n");
        return -1;
    }

    printf("Enter the %d elements  \n",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the  element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iSize);


    printf("The Largest amongst above is : %d ",iRet);

    free(p);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5 elements → 10 20 30 40 50        Output: Largest number is 50
//    Input2:  5 elements → -5 -10 -3 -20 -1      Output: Largest number is -1
//    Input3:  1 element  → 42                    Output: Largest number is 42
//    Input4:  5 elements → 7 7 7 7 7             Output: Largest number is 7
//    Input5:  6 elements → 0 -2 15 3 15 9        Output: Largest number is 15
//
/////////////////////////////////////////////////////////////////////////////////////////////////

