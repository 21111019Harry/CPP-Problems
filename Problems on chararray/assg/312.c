#include<stdio.h>
#include<stdbool.h>

void WhiteSpace(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	WhiteSpace(arr,brr);

	printf("\t%s",brr);

	return 0;
}
void WhiteSpace(char *src, char *dest)
{
	while(*src!='\0')
	{
		if(*src==' ')
		{
			*src++;
		}
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest='\0';
}
