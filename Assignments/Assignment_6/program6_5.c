//A program which accepts total marks & obtained Marks from user and calculate percentage

#include<stdio.h>

float Percentage(float fNo1,float fNo2)
{
    if(fNo1 < 0 && fNo2 < 0)
    {
        fNo1 = -fNo1;
        fNo2 = -fNo2;
    }
    if(fNo1 != 0)
    {
        return (fNo2/fNo1) * 100;
    }
    else if(fNo1 == 0 && fNo2 == 0)
    {
        return -1; //Invalid Input !!
    }

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter total marks : ");
    scanf("%d",&iValue1);
    printf("Please Enter Obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("The Percentage is : %.2f",fRet);
}