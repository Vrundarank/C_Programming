//Find Largest among Three Numbers


#include<stdio.h>

int FindLargestNumber(int num1, int num2, int num3)
{
    if((num1 > num2) && (num1 > num3))
    {
        return num1;
    }
    else if((num2 > num1) && (num2 > num3))
    {
        return num2;
    }
    else if((num3 > num1) && (num3 > num2))
    {
        return num3;
    }

}

int main()
{
    int iNo1,iNo2,iNo3;
    int iRet = 0;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&iNo1,&iNo2,&iNo3);
    
    iRet = FindLargestNumber(iNo1,iNo2,iNo3);

    printf("The largest Amongst all 3 Numbers is %d !",iRet);

    return 0;
}