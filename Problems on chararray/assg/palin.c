#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Palin(char *src);
int main()
{
	char arr[20];
//	char *str = 'ABC';

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Palin(arr);
//	Palin(&str);

	return 0;
}
void Palin(char *src)
{
	char *Start = src;
	char *End = src;
	int iCnt = 0;

	while(*End!='\0')
	{
		End++;
	}
	End--;
	while(Start<=End)
	{
		if(*Start==*End)
		{
			Start++;
			End--;
		}
		else
		{
			break;
		}
	}
	if(Start<End)
	{
		printf("NOT Palindrome:-");
	}
	else
	{
		printf("Palindrome");
	}

}
