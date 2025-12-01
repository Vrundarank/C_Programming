////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    ChkDigit
//    Description:      It is used to check if the user entered the character and cheks whether it is digit or not 
//                      if yes prints : It is a Digit
//                      if No  prints : It is Not a Digit    
//    Input:            character
//    Output:           BOOL  
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int ChkDigit(char ch)
{
        if((ch >= '0' && ch <= '9'))
        {
            return  TRUE;
        }
        else
        {
            return FALSE;
        }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit ");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//
//  Input   : 7
//  Output  : It is a Digit
//  
//  Input   : d
//  Output  : It is Not a Digit
//
//  Input   : 845
//  Output  : It is a Digit
//
//  Input   : *
//  Output  : It is Not a Digit  
//
//  Input   : &
//  Output  : It is not a Digit                           
//              
//
////////////////////////////////////////////////////////////////////////