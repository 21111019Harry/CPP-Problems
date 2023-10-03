#include<stdio.h>
#include<stdbool.h>

void Capital(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Capital(arr,brr);

	printf("Capital Char is :-%s",brr);

	return 0;
}
void Capital(char *src, char *dest)
{
	if((src==NULL) || (dest==NULL))
	{
		return ;
	}
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			*dest = *src;
			*dest++;
		}
		*src++;
	}
	*dest='\0';
}
