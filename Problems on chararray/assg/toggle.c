#include<stdio.h>

void rev(char *src);
int main()
{
	char arr[20];
//	char brr[20];

	printf("Enter the string:-");
	scanf("%[^'\n']s",arr);

	rev(arr);

	printf(" %s",arr);
	return 0;
}
void rev(char *src)
{
	char *start = src;
	char *End = src;
	char Temp = '\0';

	while(*End!='\0')
	{
		*End++;
	}
	*End--;
	while(start<End)
	{
		if((*start>='A') && (*start<='Z'))
		{
			*start = *start+32;
		}
		else if((*start>='a') && (*start<='z'))
		{
			*start = *start-32;
		}
		Temp = *start;
		*start = *End;
		*End = Temp;
		*start++;
		*End--;
	}

}
