#include<stdio.h>
#include<stdbool.h>

int Upper(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Upper(arr);

	printf("Updated string is:-%s",arr);

	return 0;
}
int Upper(char *src)
{
	if(src==NULL)
	{
		return 0;
	}
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*src = *src-32;
		}
		*src++;
	}
}
