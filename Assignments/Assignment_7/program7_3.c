//A program Which accepts number from user and prints its number line 

/*
     Input  :   4
     Output :  -4    -3    -2    -1     0    1     2     3    4    
*/
#include<stdio.h>

void NumberLine(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    //Loop for the negative of the input number to the positive of the input
    for(iCnt = -iNo; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    NumberLine(iValue);

    return 0;
}