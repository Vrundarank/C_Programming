////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Display
//    Description:      Take input from user as a character and display its corresponding capital Character , vice versa 
//                      in other cases display as it is.
//    Input     :       String as a character    
//    Output    :       String as a character
//    Author:           Vrundarank Shivaji Parite
//    Date:             02/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch[])
{   
   

   while(*ch != '\0')
   {
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            *ch = *ch + 32;
        }
        else if((*ch >= 'a') && (*ch <= 'z'))
        {
            *ch = *ch - 32;
        }
        ch++;     
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
    char Arr[50] = {'\0'};

    printf("Enter A Character : ");
    scanf(" %[^'\n']s",Arr);

    Display(Arr);

    printf("Updated String is : %s ",Arr);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
//                                      TEST CASES
//-------------------------------------------------------------------------------------
//
//  Test Case 1:
//  Input   : "Hello"
//  Output  : "hELLO"
//
//  Test Case 2:
//  Input   : "WORLD"
//  Output  : "world"
//
//  Test Case 3:
//  Input   : "cOdInG"
//  Output  : "CoDiNg"
//
//  Test Case 4:
//  Input   : "&"
//  Output  : "&"
//
//  Test Case 5:
//  Input   : "123ABCxyz"
//  Output  : "123abcXYZ"
//
//  Test Case 6:
//  Input   : "Hello & Welcome @2025"
//  Output  : "hELLO & wELCOME @2025"
//
//  Test Case 7:
//  Input   : " "    (single space)
//  Output  : " "
//
//  Test Case 8:
//  Input   : ""    (empty string)
//  Output  : ""
//
///////////////////////////////////////////////////////////////////////////////////////

