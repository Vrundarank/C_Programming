//print all factors of a number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Print_Factors
//    Description:      Prints All factors of the user Prompted Number
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Print_factors(int Num)
{
    int iNo = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iNo = 1; iNo <= Num ; iNo++)
    {
        if((Num % iNo) == 0)
        {
            printf("%d\t",iNo);
        }
    }

}

int main()
{
    int number;

    printf("Enter Number :");
    scanf("%d",&number);

    Print_factors(number);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 12      Output: 1 2 3 4 6 12
//    Input2: 11      Output: 1 11
//    Input3: 24      Output: 1 2 3 4 6 8 12 24
//    Input4: -24     Output: 1 2 3 4 6 8 12 24
//
/////////////////////////////////////////////////////////////////////////////////////////////////