////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Display
//    Description:      Take input from user as a character 
//                      if it is capital display all the characters from the input characters till Z.
//                      if input character is small then print all the character in reverse order 
//                      in other cases display as it is.
//    Input     :       character    
//    Output    :       character
//    Author:           Vrundarank Shivaji Parite
//    Date:             03/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{   
   char temp = ch;
   
    // if the Input Character is capital
    if(ch >= 'A' && ch <= 'Z')
    {
        while(temp <= 'Z')
        {
            printf("%c  ",temp);
            temp++;
        }
    }

    // if the Input Character is small
    else if(ch >= 'a' && ch <= 'z')
    {
        while(temp >= 'a')
        {
            printf("%c  ",temp);
            temp--;
        }
    }
    // Invalid Character
    else
    {
        printf("Invalid Input !");
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

    printf("Enter A Character : ");
    scanf("%c",&cValue);

    Display(cValue);

  

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
//                                      TEST CASES
//-------------------------------------------------------------------------------------
//
//  Test Case 1:
//  Input   : z
//  Output  : z  y  x  w  v  u  t  s  r  q  p  o  n  m  l  k  j  i  h  g  f  e  d  c  b  a
//
//  Test Case 2:
//  Input   : A
//  Output  : A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 
//
//  Test Case 3:
//  Input   : G
//  Output  : G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 
//
//  Test Case 4:
//  Input   : *
//  Output  : Invalid Input !
//
//  Test Case 5:
//  Input   : &
//  Output  : Invalid Input !
//
//  Test Case 6:
//  Input   : b
//  Output  : b  a
//
//
///////////////////////////////////////////////////////////////////////////////////////

