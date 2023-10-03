#include<stdio.h>

int main()
{
	char arr[20];
	char brr[20];
	int iRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the String:-");
	scanf(" %[^'\n']s",brr);

	iRet = capital(arr,brr);

	if(iRet==1)
	{
		printf("True");
	}
	else
		printf("False");

	return 0;
}
int capital(char *src, char *dest)
{
	while((*src!='\0') && (*dest!='\0'))
	{
		if((src[i]>='A') && (src[i]<='Z'))
		{
			if(*src==*dest) || 
			{

			}
		}
	}
}
