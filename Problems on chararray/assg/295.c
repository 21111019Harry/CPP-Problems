#include<stdio.h>
#include<stdbool.h>


void Reverse(char *ptr);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);
	
	Reverse(arr);

	printf("Reverse String is :- %s",arr);

	return 0;
}
void Reverse(char *ptr)
{
	char *Start = NULL;
	char *End = NULL;
	char Temp;

	if(ptr==NULL)
	{
		return;
	}

	Start = ptr;
	End = ptr;

	while(*End!='\0')
	{
		*End++;//yaha sirf End++; bhi chalta hai
	}
	*End--;//or End++;
	while(Start<End)
	{
		Temp = *Start;
		*Start = *End;
		*End = Temp;

		*Start++;//or Start++;
	     	*End--;//or End++;
	}
	if(Start<End)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
