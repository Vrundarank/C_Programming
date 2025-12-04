////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    Difference
//    Description:      Take input from user as a string
//                      Display Difference between small character and capital character
//    Input     :       String    
//    Output    :       Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             04/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


int Difference(char *str)
{
    int iCountSmall = 0, iCountCapital = 0;


    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        *str++;
    }
    return iCountSmall - iCountCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf(" %[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}