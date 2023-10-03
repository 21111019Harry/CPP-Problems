#include<stdio.h>
#include<stdbool.h>

void Palindrome(char *src);
int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Palindrome(arr);

//	printf("%s",arr);

	return 0;
}
void Palindrome(char *src)
{
	char *Start = src;
	char *End = src;

	while(*End!='\0') 
	{
		End++;
	}
	*End--;
	while(Start<End)
	{
		if((*Start>='A') && (*Start<='Z') || (*Start>='a') && (*Start<='z'))
		{
			if(*Start==*End)
			{
				*Start++;
				*End--;
			}
			else
			{
				break;
			}
		}

	}
	if(Start<End)
	{
		printf("Not Palindrome:");
	}
	else
		printf("Palindrome:");
	
}
