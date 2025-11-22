/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int ch1 = 0, ch2 = 0;
    int i  = 0,  j = 0; 
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1,ch1 = 65,ch2 = 97;j <= iCol ; j++,ch1++,ch2++)
        {
           if((i % 2) == 0)
           {
             printf("%c\t",ch2);
           } 
           else
           {
              printf("%c\t",ch1);
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
//    Input1:  4 3
//    Output:
//    ABC
//    abc
//    ABC
//    abc
//
//    Input2:  1 5
//    Output:
//    ABCDE
//
//    Input3:  3 1
//    Output:
//    A
//    a
//    A
//
//    Input4:  2 4
//    Output:
//    ABCD
//    abcd
//
//    Input5:  5 2
//    Output:
//    AB
//    ab
//    AB
//    ab
//    AB
//
/////////////////////////////////////////////////////////////////////////////////////////////////