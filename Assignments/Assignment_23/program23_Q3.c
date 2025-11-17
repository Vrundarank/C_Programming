#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountEven
//    Description:      Accepts N numbers from user and accept one another number as NO  , return
//                      index of last occurance of that NO
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////



int LastOcc(int Arr[],int iLength, int No)
{
    int iNo1 = 0, iFreq = -1;
    
    /* 
       Best case time complexity : if the element is at the end of array and : O(1)
       time complexity worst case if the element only at start of array needs to traverse 
       whole array will be : O(N)
       For this approach as we want last occurance we can start from the last element ,
       by starting from last as we only want last index we dont have to traverse the whole 
       array element by element even if the element is at the starting of the array an for at 
       the ending of array, or only one occurance .we just want to return the index
       So i think this can be a good to go approach for finding the Last Index...
    */
    for(iNo1 = iLength - 1; iNo1 >= 0 ; iNo1--)
    {
        if(Arr[iNo1] == No)
        {
          return iNo1;   
        }
    }

    return -1;

	
}
//If the  Desired element is found on the last index the complexity would be O(1)
// time complexity: O(N)



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

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such Number \n");
    }
    else
    {
        printf("last Occurance of Number is at index  %d \n",iRet);
    }

    free(p);

    return 0;
}

