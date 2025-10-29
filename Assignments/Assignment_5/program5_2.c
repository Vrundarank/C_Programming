//Find Maximum of two numbers

#include<stdio.h>

int FindMax(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

int main()
{
    int num1 , num2 , result = 0;
    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    result = FindMax(num1,num2);
    printf("Greater number is : %d ",result);
    return 0;

}