#include<stdio.h>
#include<stdbool.h>


void Toggle(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);


	Toggle(arr);

	printf("%s",arr);

	return 0;
}
void Toggle(char *src)
{
	if(src==NULL)
	{
		return ;		
	}
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*src = *src-32;
		}
		else if((*src>='A') && (*src<='Z'))
		{
			*src = *src+32;
		}
		*src++;
	}
}

