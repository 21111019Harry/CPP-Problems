#include<stdio.h>
#include<stdbool.h>

//i/p my name is khan o/p ym eman si nahk


void Reverse(char *str);
int main()
{
	char arr[20];

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);

	Reverse(arr);

	printf("Reverse String is:- %s",arr);

	return 0;
}
void Reverse(char *str)
{
	char *Start = NULL;
        char *End = NULL;
	char Temp;

	if(str==NULL)
	{
		return ;
	}

	Start = str;
	End = str;

	while(*End!='\0')
	{
		End++;	
	}
	End--;

	while(Start<End)
	{
		Temp = *Start;
		*Start = *End;
		*End = Temp;

		Start++;
		End--;

	}
}

