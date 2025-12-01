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
//    Description:      It is used to check if the user entered the character or not 
//                      if yes prints : It is Character
//                      if No  prints : It is Not a character    
//    Input:            character
//    Output:           BOOL 
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int ChkAlpha(char ch)
{
        if((ch >= 'A' && ch <= 'Z') ||  (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character ");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//
//  Input   : C
//  Output  : It is Character
//  
//  Input   : d
//  Output  : It is Character
//
//  Input   : ABC
//  Output  : It is Character
//
//  Input   : 9
//  Output  : It is Not a Charcter
//
//  Input   : &
//  Output  : It is not a Character                           
//              
//
////////////////////////////////////////////////////////////////////////