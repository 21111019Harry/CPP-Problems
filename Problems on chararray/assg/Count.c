#include<stdio.h>
#include<stdbool.h>

int Freq(char *src, char cp);
int main()
{
	int iRet = 0;
	char arr[20];
	char ch ;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Char you want:-");
	scanf(" %c",&ch);

	iRet = Freq(arr,ch);

	printf("%d",iRet);

	return 0;
}
int Freq(char *src, char cp)
{
	int *End = src;

	if(src==NULL)
	{
		return 0;
	}
	while(*End!='\0')
	{
		End++;
	}
	End--;
	while(*End==cp)
	{
		*End--;
	}
}
