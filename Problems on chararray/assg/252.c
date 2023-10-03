#include<stdio.h>
#include<stdbool.h>


void Capital(char ch)
{
	if((ch>='A') && (ch<='Z'))//string check krta fkt ith if chya jagi while taka mg to purn char bhghel
	{
		printf("Capital:");

	}
	else
	{
		printf("NO:");
	}
}
int main()
{
	char cValue = '\0';

	printf("Enter the Char:");
	scanf("%c",&cValue);

	Capital(cValue);

	return 0;
}


