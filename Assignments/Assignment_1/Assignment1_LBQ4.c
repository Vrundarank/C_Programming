//Accept one Number and check whetherand check whether is divisible by 5 or not except 0 as an Input from user

#include<stdio.h>
#include<stdbool.h>

int CheckIsDivisible(int iNo)
{
    if((iNo % 5) == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckIsDivisible(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}