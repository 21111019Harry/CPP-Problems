#include<stdio.h>


void space(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	space(arr,brr);

	printf("%s\n",brr);

	return 0;
}
void space(char *src, char *dest)
{
	while(*src!='\0')
	{
		if(*src!=' ')
		{
			*dest = *src;
			*src++;
			*dest++;
		}
		else
		{
			*src++;
		}
	}
	*dest = '\0';
}
