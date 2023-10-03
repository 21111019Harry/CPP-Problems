#include<stdio.h>
#include<stdbool.h>

bool Small(char ch);
int main()
{
	char cValue = 0, cRet = false;

	printf("Enter the Char:");
	scanf("%c",&cValue);
	
	cRet=Small(cValue);

	if(cRet == 1)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}
	return 0;
}
bool Small(char ch)
{
	if((ch>='a') && (ch<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
