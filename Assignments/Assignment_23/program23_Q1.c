#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and accept one another number as NO  , Check
//                      whether NO is Present or Not 
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                            //
//          Defining MACROS AND USER DEFINED DATATYPE                                         //
#define TRUE 1                                                                                //
#define FALSE 0                                                                               //
typedef int BOOL;                                                                             //
//                                                                                            //
//                                                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength, int iNo)
{
    int iNo1 = 0, iFreq = 0;
    
    for(iNo1 = 0; iNo1 < iLength ; iNo1++)
    {
        if(iNo == Arr[iNo1])
        {
            return TRUE;
            break;
        }
    }

    return FALSE;

	
}// time complexity: O(N)


int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0, iValue = 0;
    int *p = NULL; 
    BOOL bRet = FALSE;

    printf("Enter Number of elements : \n ");
    scanf("%d",&iSize);

    printf("Enter the number : \n ");
    scanf("%d",&iValue);

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

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present \n");
    }
    else
    {
        printf("Number is not Present \n");
    }

    free(p);

    return 0;
}

