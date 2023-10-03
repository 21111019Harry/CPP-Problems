#include<stdio.h>
#include<stdbool.h>

int Lower(char *str);
int main()
{
	char arr[20];

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);

	printf("orignal string is :-%s\n",arr);

	Lower(arr);

	printf("New String is :-%s\n",arr);

	return 0;
}
int Lower(char *str)
{
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')//he fun toggel case sathi
	{
		if((*str>='A') && (*str<='Z'))//he uppercase to lowercase convert sathi ahe
		{
			*str = *str+32;                            
		}
	
		else if((*str>='a') && (*str<='z'))//he lowercase to uppercase convert sathi ahe
		{
			*str = *str-32;
		}
		str++;
	}
}
