
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	char ch = '\0';

	for(i = 1, ch = 'a'; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++, ch++)
		{
			if(i % 2 == 0)
			{
				printf("%d\t", j);
			}
			else
			{
				printf("%c\t", ch);
			}
		}
		ch = 'a';
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
//    Input1: 3 4        Output:
//                       a   b   c   d
//                       1   2   3   4
//                       a   b   c   d
//
//    Input2: 5 3        Output:
//                       a   b   c
//                       1   2   3
//                       a   b   c
//                       1   2   3
//                       a   b   c
//
//    Input3: 2 6        Output:
//                       a   b   c   d   e   f
//                       1   2   3   4   5   6
//
//    Input4: 4 5        Output:
//                       a   b   c   d   e
//                       1   2   3   4   5
//                       a   b   c   d   e
//                       1   2   3   4   5
//
//    Input5: 1 7        Output:
//                       a   b   c   d   e   f   g
//
/////////////////////////////////////////////////////////////////////////////////////////////////
