//Accept one character from the user and check whether the character is vowel {a,e,i,o,u}

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;

bool ChkVowel(char Alphabet )
{
    if(Alphabet == 'A' || Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' || Alphabet == 'U' ||
       Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character \n");
    
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel \n");
    }
    else
    {
        printf("It is not vowel \n");
    }
    return 0;
}