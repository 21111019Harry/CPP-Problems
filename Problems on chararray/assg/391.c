#include<stdio.h>

void length(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the String:-");
	scanf(" %[^'\n']s",brr);

	length(arr,brr);

	return 0;
}
void length(char *src, char *dest)
{
	int iCnt = 0, i = 0;
	while(*src!='\0')
	{
		if(*src!=' ')
		{
			iCnt++;
		}
		*src++;
	}
	while(*dest!='\0')
	{
		if(*dest!=' ')
		{
			i++;
		}
		*dest++;
	}
	printf("%d\n%d\n",iCnt,i);
}
