////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    ChkVovel
//    Description:      Take input from user as a string
//                      Checks if there is Vovels in the String or not 
//    Input     :       String    
//    Output    :       BOOLEAN
//    Author:           Vrundarank Shivaji Parite
//    Date:             04/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkVovel(char *str)
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
        *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            bFlag = TRUE;
            break;
        }
        else 
        {
            bFlag = FALSE;
        }
        str++;
    }
    return bFlag;  
}

int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter String : ");
    scanf(" %[^'\n']s",arr);

    bRet = ChkVovel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vovel !");
    }
    else
    {
        printf("There is no Vovel !");
    }

    return 0;
}