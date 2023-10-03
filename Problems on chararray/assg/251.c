#include<stdio.h>
#include<stdbool.h>

	
bool Check(char ch)
{

		if((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z'))
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
	int cValue = '\0';
	bool bRet = false;

	printf("Enter the Char:");
	scanf("%c",&cValue);

	bRet=Check(cValue);

	if(bRet == true)
	{
		printf("Char:");
	}
	else
	{
		printf("NO Char:");
	}
	return 0;
}
