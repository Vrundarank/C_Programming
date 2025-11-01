//Check if Number is Divisible by 5

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    is_divisible_by_five
//    Description:      Check if the user prompted number is Divisible by 5 if it is Prints "Yes" if not Prints "No"  
//    Input:            Integer  
//    Output:           Boolean  
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/11/2025  
//
/////////////////////////////////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    if(number < 0)
    {
        number = -number;
    }
    if((number % 5) == 0)
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
    int number;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%s \n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1: 5			Output:	Yes	
//    Input2: -5		Output:	Yes	 
//    Input3: 10		Output:	Yes	
//    Input4: 1			Output:	No
//    Input4: 3			Output:	No	 
//
/////////////////////////////////////////////////////////////////////////////////////////////////