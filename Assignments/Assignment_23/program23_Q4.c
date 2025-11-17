#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and accept one another number as Range , Display 
//                      all elements from that range . 
//    Input:            int * , int , int , int 
//    Output:           int
//    Author:           Vrundarank Shivaji Parite
//    Date:             17/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int Range(int Arr[],int iLength, int iStart , int iEnd)
{
    int  iCnt = 0 ;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
           printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");
        
}


int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL; 
    

    printf("Enter Number of elements : \n ");
    scanf("%d",&iSize);

    printf("Enter the Starting Point : \n ");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point : \n ");
    scanf("%d",&iValue2);

  

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

    iRet = Range(p,iSize,iValue1,iValue2);


    

    free(p);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 10    Input2: 2    Input3: 8    Input4: 1 2 3 4 5 6 7 8 9 10    Output: 3 4 5 6 7 
//    Input1: 5    Input2: 2	 Input3: 6    Input4: 10 20 30 40 50          Output:   
//
/////////////////////////////////////////////////////////////////////////////////////////////////

