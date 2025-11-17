#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accept N number frm user and return product of all odd elements.
//    Input:            int * , int 
//    Output:           int
//    Author:           Vrundarank Shivaji Parite
//    Date:             17/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int Product(int Arr[],int iLength)
{
    int  iProduct = 0 , iCnt = 0, iNo1 = 0;

    for(iCnt = 0, iProduct = 1; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iNo1 = 1;
        }
    }
    if(iNo1 != 1)
    {
        return 0;
    }
    return iProduct;
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

    iRet = Product(p,iSize);


    printf("The Product is %d ",iRet);

    free(p);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 85 66 3 80 93 88 90         Output: 23715
//    Input2: 1 2 3 4 5                   Output: 15
//    Input3: 2 4 6 8 10                  Output: 0
//    Input4: 7 11 2 14 21                Output: 1617
//    Input5: 9                           Output: 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////

