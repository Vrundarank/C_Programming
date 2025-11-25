
////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j= iCol; j >= 1; j--)
        {
            if(j <= i)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  like Test cases handled by application
//
//  Input   :   iRow : 4    iCol : 4 
//
//  Output  :   *       *       *       *
//              *       *       *
//              *       *
//              *
//
////////////////////////////////////////////////////////////////////////
