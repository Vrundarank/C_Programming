// A program which accepts number from user and Display its digits in Reverse Order 

/*
    Input  :   2395 
    output :   5
               9
               3
               2

    Input  :   1018
    Output :   8
               1
               0
               1

    Input  :   -1080
    Output :   8
               1
               0
               1
               
    Input  :   9800
    Output :   0
               0
               0
               9
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    DisplayDigit
//    Description:      It is used to display digits of a number in reverse  
//    Input:            Integer  
//    Output:           Integer  
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025 
//
/////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 2395        Output: 5 9 3 2
//    Input2: 1018        Output: 8 1 0 1
//    Input3: -1018       Output: 8 1 0 1
//    Input4: 9000        Output: 0 0 0 9
//    Input5: 6969        Output: 9 6 9 6
//    Input5: 21          Output: 1 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////