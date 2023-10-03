#include<stdio.h>
#include<stdbool.h>


//accept string and check this palindrome or not but without reverse a string.

void Palindrome(char *str);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Palindrome(arr);

	return 0;
}
void Palindrome(char *str)
{
	char *Start = str;
	char *End = str;
	int iCnt = 0;

	if(str==NULL)
	{
		return ;
	}


	while(*End!='\0')//ye loop end string ke last main leke jayega and uske bad end-- he means wo string ke 2nd last main rukega
	{
		End++;
	}
	End--;

	while(Start<End)//ye loop Start and End ko compair kr raha he 
	{
		if(*Start!=*End)//ye if array ke first and last element ko compair kr raha hai
		{
			break;
		}
		Start++;
		End--;
	}
	if(Start<End)
	{
		printf("Not Palindrome:");
	}
	else
	{
		printf("Palindrome");
	}
}
