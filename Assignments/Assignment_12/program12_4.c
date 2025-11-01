//Sum of Even Factor Exclude the Number itself


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Sum_Of_Even_Factors
//    Description:      Prints The  Sum of All even factors of the user Prompted number 
//    Input:            Integer  
//    Output:           Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Sum_Of_Even_Factors(int Num)
{
    int iSum = 0;
    int iNo = 0;
    if(Num < 0)
    {
        Num = -Num;
    }
    for(iNo = 1; iNo <= Num / 2;  iNo++)
    {
        if((Num % iNo == 0) && (iNo % 2 == 0))
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

    printf("The Sum of All positive Even Factors is : %d ",Sum_Of_Even_Factors(number));

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 12      Output: 12
//    Input2: 11      Output: 0
//    Input3: 24      Output: 32
//    Input4: -24     Output: 32
//
/////////////////////////////////////////////////////////////////////////////////////////////////