#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and accept one another number as NO  , return
//                      Frequency of NO from it. 
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int  Frequency(int Arr[],int iLength, int No)
{
    int iNo1 = 0, iFreq = 0;
    
    for(iNo1 = 0; iNo1 < iLength ; iNo1++)
    {
        if(Arr[iNo1] == No)
        {
           iFreq++;
        }
    }

    return iFreq;
  

	
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

    printf("Enter the elements  \n",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the %d element : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf(" %d",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: N : 6
//            NO : 66
//            Elements : 85 66 3 66 93 88 
//    Output: 2
//
//    Input2: N : 6 
//            NO : 12
//            Elements : 85 11 3 15 11 111 
//    Output: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////