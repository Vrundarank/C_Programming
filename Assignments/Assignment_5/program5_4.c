//Check positive Negative or Zero 

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("The Number %d is positive ! ",num);
    }
    else if(num < 0)
    {
        printf("The Number %d is Negative !",num);
    }
    else if(num == 0)
    {
        printf("The Number %d is Zero !",num);
    }

}

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    
    CheckNumberType(number);

    return 0;
}