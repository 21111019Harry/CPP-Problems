#include<stdio.h>
#include<stdbool.h>

int Lower(char *str);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Orignal string is :-%s\n",arr);

	Lower(arr);

	printf("New string is :-%s\n",arr);

	return 0;
}
int Lower(char *str)
{
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str = *str+32;
		}
		str++;
	}
}
