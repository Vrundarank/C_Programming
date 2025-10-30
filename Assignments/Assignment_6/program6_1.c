#include<stdio.h>

void DisplayFullName(char cFullName[30])
{
	printf("Your name is %s\n", cFullName);
}

int main()
{
    char Name[30];
    printf("Please Enter your Full Name :");
    scanf("%[^\n]c",&Name);

    DisplayFullName(Name);

    return 0;
}