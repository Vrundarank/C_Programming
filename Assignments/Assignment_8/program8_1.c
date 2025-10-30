/*Program which accpets number from user and if number is less than 50 thenn print small , if it is greater than 50 
  and less than 100 then print medium , if it is greater than 100 then print large.
*/

/*
    | Best  Case    |
    Input  :  50 
    Output :  Small

    | Average case  |
    Input  :  75       
    Output :  Medium 

    | Worst case    |
    Input  :  110 
    Output :  Large 
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)                               // BestCase : Executed in Best case as the number being less than 50 and got it in first if() 
    {
         printf("%d is Small \n",iNo);   
    }
    else if((iNo > 50) && (iNo < 100))         // AverageCase : Executed in Average case as the number being greater than 50 and less than 100 and 
    {
         printf("%d is Medium \n",iNo);
    }
    else                                       // WorstCase : Executed in Worst Case as the number being greater than 100 as it neither executed in the first two control statements
    {
        printf("%d is large \n",iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

