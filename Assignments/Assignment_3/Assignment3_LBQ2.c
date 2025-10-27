//write a program which accept one number from user and print even factors of that number on Screen

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("1 ");

    for(i = 2; i <= iNo / 2 ; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
                 printf("%d ",i);
            
        }
    }
    printf("\n");
}
 
int main()
{
    int iValue = 0;

    printf("Enter Number : \n ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;


}

