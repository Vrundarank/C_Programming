/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;

	if(iRow != iCol)
	{
		printf("Invalid input!\n");
		printf("Row and column number should be same.\n");
		return;
	}

	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if(j <= (iCol - i + 1))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
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
//    Input1: 4 4        Output:
//                        *   *   *   *
//                        *   *   *   #
//                        *   *   #   #
//                        *   #   #   #
//
//    Input2: 3 3        Output:
//                        *   *   *
//                        *   *   #
//                        *   #   #
//
//    Input3: 5 5        Output:
//                        *   *   *   *   *
//                        *   *   *   *   #
//                        *   *   *   #   #
//                        *   *   #   #   #
//                        *   #   #   #   #
//
//    Input4: 4 5        Output:
//                        Invalid input!
//                        Row and column number should be same.
//
//    Input5: 2 2        Output:
//                        *   *
//                        *   #
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////