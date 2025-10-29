//program Which accepts one number From user and check whether that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    printf("Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(iValue > 100)
    {
        printf("The Number %d is Greater than 100 ",iValue);
    }
    else
    {
        printf("The Number %d is Smaller than 100 ",iValue);
    }
}