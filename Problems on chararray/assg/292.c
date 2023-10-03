#include<stdio.h>
#include<stdbool.h>

int Frequency(char *ptr,char ch);
int main()
{
	char arr[20];
	char ch;
	int cRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter Char you want:-");
	scanf(" %c",&ch);

	cRet=Frequency(arr,ch);

	printf("%d",cRet);

	return 0;
}
int Frequency(char *ptr,char ch)
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
			iCnt++;
		}

		ptr++;
	}
	return iCnt;
}
