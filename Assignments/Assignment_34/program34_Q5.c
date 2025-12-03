////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    ChkSmall
//    Description:      Accept character from user and print its ASCII value in decimal,
//                      octal , Decimal and Hexadecimal Format.
//    Input:            Character 
//    Output:           ASCII value in DEC, OCT, HEX
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{   
    
        printf("|-------------------------------------|\n");
        printf("|  DECIMAL  |  OCTAL  |  HEXADECIMAL  |\n");
        printf("|-------------------------------------|\n");
        printf("|   %4d    |  %03o    |     %02X        |\n", ch,ch,ch);
        printf("|-------------------------------------|\n");
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter The charcater : ");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}
/*
Test Case 1:
Input  : 34
Output :
|-------------------------------------|
|  DECIMAL  |  OCTAL  |  HEXADECIMAL  |
|-------------------------------------|
|     51    |  063    |     33        |
|-------------------------------------|

Test Case 2:
Input  : 5
Output :
|-------------------------------------|
|  DECIMAL  |  OCTAL  |  HEXADECIMAL  |
|-------------------------------------|
|     53    |  065    |     35        |
|-------------------------------------|

Test Case 3:
Input  : *
Output :
|-------------------------------------|
|  DECIMAL  |  OCTAL  |  HEXADECIMAL  |
|-------------------------------------|
|     42    |  052    |     2A        |
|-------------------------------------|

Test Case 4:
Input  : @
Output :
|-------------------------------------|
|  DECIMAL  |  OCTAL  |  HEXADECIMAL  |
|-------------------------------------|
|     64    |  100    |     40        |
|-------------------------------------|
*/

