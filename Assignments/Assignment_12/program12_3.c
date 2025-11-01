//Print Sum of positive Factors of  number



#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Sum_Of_Factors
//    Description:      Prints the Sum of All positive factors of the user Prompted Number
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Sum_Of_Factors(int Num)
{
    int iSum = 0;
    int iNo = 0;
    if(Num < 0)
    {
        Num = -Num;
    }
    for(iNo = 1; iNo <= Num ; iNo++)
    {
        if((Num % iNo) == 0)
        {
            iSum = iSum + iNo;
        }
    }
    return iSum;

}

int main()
{
    int number;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("The Sum of All positive Factors is : %d ",Sum_Of_Factors(number));

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 12      Output: 28
//    Input2: 11      Output: 12
//    Input3: 24      Output: 60
//    Input4: -24     Output: 60
//
/////////////////////////////////////////////////////////////////////////////////////////////////
