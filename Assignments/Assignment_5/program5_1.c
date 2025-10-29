//Check Even or Odd Number

#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    } 

    if((iNo % 2) == 0)
    {
        printf("The Number %d is Even ! \n",iNo);
    }
    else
    {
        printf("The Number %d is Odd  ! \n",iNo);
    }
}

int main()
{
    int number = 0;

    printf("Enter a Number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}