////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    CountSmall
//    Description:      Take input from user as a string
//                      and count number of Small characters 
//    Input     :       String    
//    Output    :       Integer
//    Author:           Vrundarank Shivaji Parite
//    Date:             04/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}