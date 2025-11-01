//Program to print all numbers from 1 to N

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    print_numbers
//    Description:      It used to print numbers upto N      
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int iCnt = 0;
    if(limit < 0)
    {
        limit = -limit;
    }
    for(iCnt = 1; iCnt <= limit ; iCnt++)
    {
        printf("%d ",iCnt);
    }
    printf("\n");
}// Time Complexity O(N)

int main()
{
    int limit;

    printf("Enter Number : ");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 5       Output: 1 2 3 4
//    Input2: -5      Output: 1 2 3 4
//    Input3: 1       Output:
//    Input4: 0       Output: 
//    Input5: 10      Output: 1 2 3 4 5 6 7 8 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////