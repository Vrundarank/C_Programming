// A program which accpets a number from user and display all its non factors



#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0 ;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
                printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n ");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;


}