//A program which Accept two numbers and check whether numbers are equal or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;
    printf("Please Enter Two Numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(iValue1 == iValue2)
    {
        printf("The Number %d and %d is Equal !",iValue1,iValue2);
    }
    else
    {
        printf("The Number %d and %d is not Equal !",iValue1,iValue2);
    }
}