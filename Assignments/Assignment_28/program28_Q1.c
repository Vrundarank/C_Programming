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
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1,ch = 65;j <= iCol ; j++,ch++)
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
//    A       B       C
//    A       B       C
//    A       B       C
//    A       B       C
//
//    Input2:  1 5
//    Output:
//    A       B       C       D       E
//
//    Input3:  3 1
//    Output:
//    A
//    A
//    A
//
//    Input4:  2 4
//    Output:
//    A       B       C       D
//    A       B       C       D
//
//    Input5:  5 2
//    Output:
//    A       B
//    A       B
//    A       B
//    A       B
//    A       B
//
/////////////////////////////////////////////////////////////////////////////////////////////////