#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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
5       #       4       #       3       #       2       #       1       #

if Input : 8
Enter Number of Elements : 
8
Output :
8       #       7       #       6       #       5       #       4       #       3       #       2       #       1       #

if Input : 3
Enter Number of Elements : 
3 
Output : 
3       #       2       #       1       #

*/