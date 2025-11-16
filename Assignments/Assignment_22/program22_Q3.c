#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and check whether the number contains 11 in it or not
//    Input:            Integer  
//    Output:           boolean
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[],int iLength)
{
    int iNo = 0;
    bool bFlag = false;
    for(iNo = 0; iNo < iLength ; iNo++)
    {
        if(Arr[iNo] == 11)
        {
           bFlag = true;
           break;
        }
    }

    return bFlag;
  

	
}// time complexity: O(N)


int main()
{
    int iSize = 0, bRet = 0 , iCnt = 0 ;
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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is Present...");
    }
    else
    {
        printf("11 is Absent...");
    }
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 85 66 3 80 93 88 90        Output: 11 Not present  
//    Input2: 1 2 3 4 11                 Output: 11 is present
//
/////////////////////////////////////////////////////////////////////////////////////////////////