#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accept N number from user and return the Smallest number.
//    Input:            int * , int 
//    Output:           int
//    Author:           Vrundarank Shivaji Parite
//    Date:             18/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int Minimum(int Arr[],int iLength)
{
    int  iSmallest = 0 , iCnt = 0;

    for(iCnt = 0,  iSmallest = Arr[0] ;  iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] < iSmallest)
        {
            iSmallest = Arr[iCnt];
        }
    }
    return iSmallest;
    
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

    iRet = Minimum(p,iSize);


    printf("The Smallest amongst above is : %d ",iRet);

    free(p);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5 elements → 10 20 30 40 50        Output: Smallest number is 10
//    Input2:  5 elements → -5 -10 -3 -20 -1      Output: Smallest number is -20
//    Input3:  1 element  → 42                    Output: Smallest number is 42
//    Input4:  5 elements → 7 7 7 7 7             Output: Smallest number is 7
//    Input5:  6 elements → 0 -2 15 3 -5 9        Output: Smallest number is -5
//
/////////////////////////////////////////////////////////////////////////////////////////////////



