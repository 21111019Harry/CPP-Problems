#include<stdio.h>

void count(char *src, char * dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%s",arr);

	printf("Enter the String:-");
	scanf(" %s",brr);

	count(arr,brr);

	return 0;
}
void count(char *src, char *dest)
{
	int iCnt = 0, i = 0;
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			iCnt++;
		}
		*src++;
	}
	printf("%d\n",iCnt);
	iCnt = 0;
	while(*dest!='\0')
	{
		if((*dest>='A') && (*dest<='Z'))
		{
			iCnt++;
		}
		*dest++;
	}
	printf("%d\n",iCnt);
}
