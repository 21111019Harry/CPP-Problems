#include<stdio.h>

void small(char *src, char *dest);
int main()
{
	char arr[20] = {'\0'};
	char brr[20] = {'\0'};

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	small(arr,brr);

	printf("%s\n",brr);

	return 0;
}
void small(char *src, char *dest)
{
	while(*src!='\0')
	{
	//	if((*src>='a') && (*src<='z'))
		if((*src>='A') && (*src<='Z'))
		{
			*src = *src+32;
		}
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest = '\0';
}
