//Accept one character from the user and convert case of that character

#include<stdio.h>
void DisplayConvert(char cAlphabet)
{
    char UpperCase[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char LowerCase[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int  iCnt = 0;
    
    for(iCnt = 0; iCnt < 26 ; iCnt++)
        if(cAlphabet == UpperCase[iCnt])
        {
            printf("%c",LowerCase[iCnt]);
        }
        else if(cAlphabet == LowerCase[iCnt])
        {
            printf("%c",UpperCase[iCnt]);
        }
}

int main()
{
    char cValue = '\0';
    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}