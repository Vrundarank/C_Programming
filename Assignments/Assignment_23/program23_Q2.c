#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and accept one another number as NO  , return
//                      index of first occurance of that NO
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int FirstOccurance(int Arr[],int iLength, int No)
{
    int iNo1 = 0, iFreq = 0;
    
    for(iNo1 = 0; iNo1 < iLength ; iNo1++)
    {
        if(Arr[iNo1] ==  No)
        {
           return iNo1;
        }
    }

    return -1;

	
}// time complexity: O(N)


int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0, iValue = 0;
    int *p = NULL; 
    

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

    iRet = FirstOccurance(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such Number \n");
    }
    else
    {
        printf("First Occurance Number is %d \n",iRet);
    }

    free(p);

    return 0;
}

