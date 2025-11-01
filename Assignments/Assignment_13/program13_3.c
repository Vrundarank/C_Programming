//Program to print all numbers from 1 to N

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    print_odd_numbers
//    Description:      It used to print odd numbers upto N      
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int iCnt = 0;
    if(limit < 0)
    {
        limit = -limit;
    }
    for(iCnt = 1; iCnt <= limit ; iCnt++) // 
    {
        if((iCnt %2) != 0 )
        {
            printf("%d ",iCnt);
        }
    }
    printf("\n");
}// Time Complexity O(N)

int main()
{
    int limit;

    printf("Enter Number : ");
    scanf("%d",&limit);

    print_odd_numbers(limit);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 1       Output: 1
//    Input2: 2       Output: 1
//    Input3: 5       Output: 1 3 5
//    Input4: 10      Output: 1 3 5 7 9
//    Input5: -10     Output: 1 3 5 7 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////