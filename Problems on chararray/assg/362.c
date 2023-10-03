#include<stdio.h>
#include<stdbool.h>

bool Compair(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];
	int iRet = 0;

	printf("Enter The First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	iRet = Compair(arr,brr);

	if(iRet==true)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}

	return 0;
}
bool Compair(char *src, char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return 0;
	}
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
	{
		return false;
	}
}


