/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i  = 0,  j = 0; 
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1;j <= iCol ; j++)
        {
            if(i == j)
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
    }
}
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
//    4       4       4
//    3       3       3
//    2       2       2
//    1       1       1
//
//    Input2:  1 5
//    Output:
//    1       1       1       1       1
//
//    Input3:  3 1
//    Output:
//    3
//    2
//    1
//
//    Input4:  2 4
//    Output:
//    2       2       2       2
//    1       1       1       1
//
//    Input5:  5 2
//    Output:
//    5       5
//    4       4
//    3       3
//    2       2
//    1       1
//
/////////////////////////////////////////////////////////////////////////////////////////////////