#include<stdio.h>
#include<stdbool.h>



int Index(char *ptr,char ch);
int main()
{
	char arr[20];
	char ch;
	int iRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Char you want:-");
	scanf(" %c",&ch);

	iRet=Index(arr,ch);

	printf("%d",iRet);

	return 0;
}
int Index(char *ptr,char ch)
{
	int iCnt = 0;
	if(ptr==NULL)
	{
		return -1;
	}
	while(*ptr!='\0')
	{
		if(*ptr==ch)
		{
			return iCnt;
		}
		*ptr++;
		iCnt++;
	}
}
