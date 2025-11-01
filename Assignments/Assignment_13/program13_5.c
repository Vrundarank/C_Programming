// Find Sum of first N even Numbers

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    sum_even_numbers
//    Description:      It used to print sum  of even numbers upto N      
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;
    if(limit < 0)
    {
        limit = -limit;
    }
    for(iCnt = 0; iCnt <= limit ; iCnt++) // Deliberately initialized iCnt to 0 because 0 is an Even number as well.
    {
        if((iCnt %2) == 0 )
        {
            iSum = iSum + iCnt; 
        }
    }
    return iSum;
}// Time Complexity O(N)

int main()
{
    int limit;

    printf("Enter Number : ");
    scanf("%d",&limit);

    printf("%d ",sum_even_numbers(limit));

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 3       Output: 2
//    Input2: 11      Output: 30
//    Input3: 1       Output: 0
//    Input4: 0       Output: 0
//    Input5: 15      Output: 56
//
/////////////////////////////////////////////////////////////////////////////////////////////////