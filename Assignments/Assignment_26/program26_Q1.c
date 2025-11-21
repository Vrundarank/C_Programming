#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iChar = 0;

    for(iCnt = 1, iChar = 65 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",iChar);
        iChar++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 5        Output: A       B       C       D       E
//    Input2: 1        Output: A
//    Input3: -1       Output:
//    Input4: 0        Output: 
//    Input5: 26       Output: A       B       C       D       E       F       G       H       I
// 						       J       K       L       M       N	   O	   P       Q       R
// 						       S	   T       U       V       W       X       Y       Z
//
//    Input6: 27	   Output: A       B       C       D       E       F       G       H       I
// 							   J       K       L       M       N	   O	   P       Q       R
// 							   S       T       U       V       W       X       Y       Z       [
//
/////////////////////////////////////////////////////////////////////////////////////////////////