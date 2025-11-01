//Find Sum of First N natural Numbers


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    sum_natural_numbers
//    Description:      Find Sum of First N natural Numbers
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int iSum =0;
    if(limit < 0)
    {
        limit = -limit;
    }
    for(iCnt = 1; iCnt <= limit ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}// Time Complexity O(N)

int main()
{
    int limit;

    printf("Enter Number : ");
    scanf("%d",&limit);

    printf("%d ",sum_natural_numbers(limit));

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 3       Output: 6
//    Input2: 11      Output: 66
//    Input3: 1       Output: 1
//    Input4: 0       Output: 0
//    Input5: 15      Output: 120
//
/////////////////////////////////////////////////////////////////////////////////////////////////