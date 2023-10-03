#include<stdio.h>
#include<stdbool.h>

void Small(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Small(arr,brr);

	printf("%s",brr);

	return 0;
}
void Small(char *src, char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z') || (*src==' '))
		{
			*dest = *src;
			*dest++;
		}
		*src++;
	}
	*dest='\0';
}
