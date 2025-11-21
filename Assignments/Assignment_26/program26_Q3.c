#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}

/*
if Input : 5
Enter Number of Elements : 
5
Output :
1       *       2       *       3       *       4       *       5       *

if Input : 8
Enter Number of Elements : 
8
Output :
1       *       2       *       3       *       4       *       5       *       6       *       7       *       8       *

if Input : 3
Enter Number of Elements : 
3
Output :
1       *       2       *       3       *

*/