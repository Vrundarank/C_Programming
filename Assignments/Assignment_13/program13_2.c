//Program to print all even numbers from 0 to N

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    print_even_numbers
//    Description:      It used to print even numbers upto N      
//    Input:            Integer  
//    Output:           Integer 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int iCnt = 0;
    if(limit < 0)
    {
        limit = -limit;
    }
    for(iCnt = 0; iCnt <= limit ; iCnt++) // Deliberately initialized iCnt to 0 because 0 is an Even number as well.
    {
        if((iCnt %2) == 0 )
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

    print_even_numbers(limit);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2       Output: 2
//    Input2: 5       Output: 2 4
//    Input3: 1       Output:
//    Input4: 10      Output: 2 4 6 8 10
//    Input5: -10     Output: 2 4 6 8 10
//
/////////////////////////////////////////////////////////////////////////////////////////////////