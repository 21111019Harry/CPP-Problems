#include<stdio.h>
#include<stdbool.h>

void Digit(char ch);
int main()
{
	char cValue = '\0';

	printf("Enter the Char:");
	scanf("%c",&cValue);

	Digit(cValue);

	return 0;
}
void Digit(char ch)
{
	if((ch>=48) && (ch<=57))
	{
		printf("%c True",ch);
	}
	else
	{
		printf("False");
	}
}
