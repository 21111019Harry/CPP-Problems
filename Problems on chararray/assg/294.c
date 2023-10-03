#include<stdio.h>
#include<stdbool.h>

int Last(char *str, char ch);
int main()
{
	int iRet = 0;
	char arr[20];
	char cValue = '\0';

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Char:-");
	scanf(" %c",&cValue);

	iRet=Last(arr,cValue);

	printf("%d",iRet);

	return 0;
}
int Last(char *str, char ch)
{
	char *End = str;
	int iCnt = 0;

	while(*End!='\0')
	{
		End++;
	}
	End--;
	while(*End!=*str)
	{
		if(*End==ch)	
		{
			return iCnt;
		}
		*End--;
		iCnt++;
	}
}
