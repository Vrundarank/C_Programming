#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i  = 0,  j = 0; 
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            printf("%d\t",j);            
        }
        printf("\n");
    }

}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the number of rows and columns: ");
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
//    1       2       3
//    1       2       3
//    1       2       3
//    1       2       3
//
//    Input2:  1 5
//    Output:
//    1       2       3       4       5
//
//    Input3:  3 1
//    Output:
//    1
//    1
//    1
//
//    Input4:  2 4
//    Output:
//    1       2       3       4
//    1       2       3       4
//
//    Input5:  5 2
//    Output:
//    1       2
//    1       2
//    1       2
//    1       2
//    1       2
//
/////////////////////////////////////////////////////////////////////////////////////////////////