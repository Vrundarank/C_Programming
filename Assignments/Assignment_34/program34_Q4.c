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
//    Function Name:  ChkSpecial
//    Description:    Take input from user as a character 
//                    check whether it is a special symbol or not
//    Input     :     character    
//    Output    :     character
//    Author:         Vrundarank Shivaji Parite
//    Date:           03/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{   

    // if the Input Character is capital
     if(!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
    {
       return TRUE;
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


    printf("Enter A Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("It is a Special Symbol \n");
    }
    else
    {
        printf("It is not a special Symbol \n");
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
//                                      TEST CASES
//-------------------------------------------------------------------------------------
//
//  Test Case 1:
//  Input   : A
//  Output  : It is not a special character 
//
//  Test Case 2:
//  Input   : &
//  Output  : It is a special Character  
//
//  Test Case 3:
//  Input   : (
//  Output  : It is a special Character
//
//  Test Case 4:
//  Input   :  
//  Output  : It is a special Character
//
//
///////////////////////////////////////////////////////////////////////////////////////

