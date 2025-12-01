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
//    Function Name:    ChkAlpha
//    Description:      It is used to check if the user entered the character is Capital or not 
//                      if yes prints : It is Capital Character
//                      if No  prints : It is Not a Capital character    
//    Input:            character
//    Output:           BOOL
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int ChkCapital(char ch)
{
        if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital character ");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//
//  Input   : C
//  Output  : It is Capital Character
//  
//  Input   : d
//  Output  : It is Not a Capital Character
//
//  Input   : ABC
//  Output  : It is a Capital Character
//
//  Input   : 9
//  Output  : It is Not  Capital  Charcter
//
//  Input   : &
//  Output  : It is not a Capital Character                           
//              
//
////////////////////////////////////////////////////////////////////////