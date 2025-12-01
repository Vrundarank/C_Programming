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
//    Function Name:    ChkSmall
//    Description:      It is used to check if the user entered the character and cheks whether it is lower case or Not (a - z) 
//                      if yes prints : It is a small case Character
//                      if No  prints : It is Not a Small Case Charcater    
//    Input:            character
//    Output:           BOOL  
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
        if((ch >= 'a' && ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Case Character");
    }
    else
    {
        printf("It is not a Small Case Character ");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases handled by the application
//
//  Input   : y
//  Output  : It is a Small Case Character
//  
//  Input   : H
//  Output  : It is not a Small Case Character
//
//  Input   : 845
//  Output  : It is not a Small Case Character
//
//  Input   : *
//  Output  : It is not a Small Case Character
//
//  Input   : jsfd
//  Output  : It is a Small Case Character                           
//              
//
////////////////////////////////////////////////////////////////////////