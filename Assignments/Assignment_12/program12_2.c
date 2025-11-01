//Count Total Factors of a Number and print !


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Count_Factors
//    Description:      Prints the Count of All factors of the user Prompted Number
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Count_factors(int Num)
{
    int iCnt = 0;
    int iNo = 0;
    if(Num < 0)
    {
        Num = -Num;
    }
    for(iNo = 1; iNo <= Num ; iNo++)
    {
        if((Num % iNo) == 0)
        {
            iCnt = iCnt + 1;
        }
    }
    return iCnt;
}

int main()
{
    int number;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&number);

    iRet = Count_factors(number);

    printf("There are %d factors of Number %d ",iRet,number);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 12      Output: 6
//    Input2: 11      Output: 2
//    Input3: 24      Output: 8
//    Input4: -24     Output: 8
//
/////////////////////////////////////////////////////////////////////////////////////////////////