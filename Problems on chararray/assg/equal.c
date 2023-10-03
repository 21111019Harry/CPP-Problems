#include<stdio.h>
#include<stdbool.h>

int check(char *src, char * dest);
int main()
{
	char arr[20];
	char brr[30];
	int iRet = 0;

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	check(arr,brr);

	if(iRet==true)
	{
		printf("True:");
	}
	else
		printf("False:");

	return 0;
}
int check(char *src, char *dest)
{
	int iCnt = 0;

	while((*src!='\0') && (*dest!='\0'))
	{
		if(*src==*dest)
		{
			*src++;
			*dest++;
		}
		else
		{
			break;
		}
	}
	if(*src==*dest)
	{
		return true;
	}
	else
		return false;
}
