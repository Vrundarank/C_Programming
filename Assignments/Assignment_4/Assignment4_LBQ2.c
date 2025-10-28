//A program which accepts number from user and display its factors in Decreasing order


#include<stdio.h>

void FactorReverse(int iNo)
{
    int iCnt = 0 ;
    int iBounds = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iBounds = (iNo / 2), iCnt = iBounds; iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0 )
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

    FactorReverse(iValue);

    return 0;


}