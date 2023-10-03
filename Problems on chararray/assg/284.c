#include<stdio.h>
#include<stdbool.h>


int Digit(char *ptr);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Digit(arr);

	return 0;
}
int Digit(char *ptr)
{
	if(ptr==NULL)
	{
		return -1;
	}
	while(*ptr!='\0')
	{
		if((*ptr>=48) && (*ptr<=57))
		{
			printf("%c",*ptr);
		}
		*ptr++;
	}
}
