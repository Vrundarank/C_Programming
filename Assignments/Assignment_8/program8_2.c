// Accept Single digit number from user and print it into word

#include <stdio.h>

void DisplayNumberWord(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	switch(iNo)
	{
		case 0:
		printf("Zero\n");
		break;
		
		case 1:
		printf("One\n");
		break;

		case 2:
		printf("Two\n");
		break;

		case 3:
		printf("Three\n");
		break;

		case 4:
		printf("Four\n");
		break;

		case 5:
		printf("Five\n");
		break;

		case 6:
		printf("Six\n");
		break;

		case 7:
		printf("Seven\n");
		break;

		case 8:
		printf("Eight\n");
		break;

		case 9:
		printf("Nine\n");
		break;

		default:
		printf("Invalid Number\n");
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	DisplayNumberWord(iValue);

	return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//	Testcases successfully handled by the application	
//
//	Input1: 3			Output: Three
//	Input2:	1			Output: One
//	Input3:	9			Output:	Nine
//	Input3:	0			Output:	Zero
//	Input3:	-3			Output:	Three
//	Input3:	69			Output: Invalid number
//
/////////////////////////////////////////////////////////////////////////