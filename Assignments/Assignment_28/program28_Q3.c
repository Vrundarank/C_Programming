/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int ch = 0;
    int i  = 0,  j = 0; 
    for(i = 1 , ch = 65; i <= iRow ; i++,ch++)
    {
        for(j = 1;j <= iCol ; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter number of rows and columns: ");
	scanf("%d %d", &iValue1, &iValue2);

	Pattern(iValue1, iValue2);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  4 3
//    Output:
//    A       A       A
//    B       B       B
//    C       C       C
//    D       D       D
//
//    Input2:  1 5
//    Output:
//    A       A       A       A       A
//
//    Input3:  3 1
//    Output:
//    A
//    B
//    C
//
//    Input4:  2 4
//    Output:
//    A       A       A       A
//    B       B       B       B
//
//    Input5:  5 2
//    Output:
//    A       A
//    B       B
//    C       C
//    D       D
//    E       E
//
/////////////////////////////////////////////////////////////////////////////////////////////////