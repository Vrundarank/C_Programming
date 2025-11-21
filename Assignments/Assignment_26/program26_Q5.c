#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",2 * iCnt);
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
2       4       6       8       10

if Input : 8
Enter Number of Elements : 
8
Output :
2       4       6       8       10      12      14      16

if Input : 10
Enter Number of Elements : 
10
Output :
2       4       6       8       10      12      14      16      18      20

*/