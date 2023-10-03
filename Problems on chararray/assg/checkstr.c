#include<stdio.h>
#include<stdbool.h>

int check(char *src, char *dest, int no);
int main()
{
	char arr[20];
	char brr[20];
	int iRet = 0;
	int i = 0;

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Seconf=d String:-");
	scanf(" %[^'\n']s",brr);

	printf("Enter the NO:-");
	scanf(" %d",&i);

	iRet = check(arr,brr,i);

	if(iRet==1)
	{
		printf("True");
	}
	else
	{
		printf("False:");
	}
	return 0;
}
int check(char *src, char *dest, int no)
{
	while((*src!='\0') && (*dest!='\0') && (no!=0))
	{
		if(*src==*dest)
		{
			*src++;
			*dest++;
			no--;
		}
		else
		{
			return -1;
		}
	}
	if(*src==*dest)
	{
		return true;
	}
}
