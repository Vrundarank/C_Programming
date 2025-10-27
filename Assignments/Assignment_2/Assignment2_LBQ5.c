//Accept number from user and check whether the number is even or odd.

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    //Display Result
    if((iValue % 2) == 0)
    {
        printf("The number %d is Even \n",iValue);
    }
    else
    {
        printf("The number %d is Odd \n",iValue);
    }

    return 0;
}


