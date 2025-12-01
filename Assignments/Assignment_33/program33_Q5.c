////////////////////////////////////////////////////////////////////////
//
//  Required Header Files , Macros and typedef's
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name:    DisplaySchedule
//    Description:      It is used to Display the Schedule of Student exam if he prompts the correct division 
//                      if yes prints : your exam at [time] AM
//                      if No  prints : Invalid Division   
//    Input:            character
//    Output:           character  
//    Author:           Vrundarank Shivaji Parite
//    Date:             01/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
        if((chDiv == 'A' || chDiv == 'a'))
        {
            printf("Your exam at 7 AM ! \n");
        }
        else if((chDiv == 'B' || chDiv == 'b'))
        {
            printf("Your exam at 8:30 AM ! \n");
        }
        else if((chDiv == 'C' || chDiv == 'c'))
        {
            printf("Your exam at 9:20 AM ! \n");
        }
        else if((chDiv == 'D' || chDiv == 'd'))
        {
            printf("Your exam at 10:30 AM ! \n");
        }
        else
        {
            printf("Invalid Division \n");
        }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    // Sir as per your problem 
    /* here you told to declare a BOOL type var named bRet but as the program doenst need to return any 
       value to the main from helper funtion named there was      
    */ 
    printf("Enter the Character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input   : A
//  Output  : Your exam at 7:00 AM!
//
//  Input   : a
//  Output  : Your exam at 7:00 AM!
//
//  Input   : B
//  Output  : Your exam at 8:30 AM!
//
//  Input   : b
//  Output  : Your exam at 8:30 AM!
//
//  Input   : C
//  Output  : Your exam at 9:20 AM!
//
//  Input   : c
//  Output  : Your exam at 9:20 AM!
//
//  Input   : D
//  Output  : Your exam at 10:30 AM!
//
//  Input   : d
//  Output  : Your exam at 10:30 AM!
//
//  Input   : x
//  Output  : Invalid Division
//
////////////////////////////////////////////////////////////////////////