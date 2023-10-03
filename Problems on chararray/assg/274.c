#include<stdio.h>
#include<stdbool.h>

int Vowels(char *p);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);

	iRet = Vowels(arr);

	if(iRet==true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
	return 0;
}
int Vowels(char *p)
{
	int iCnt = 0;

	if(p==NULL)
	{
		return -1;
	}
	while(*p!='\0')
	{
		if((*p=='a')|| (*p=='e') || (*p=='i') || (*p=='o') || (*p=='u'))
		{
			return true;
		}
		p++;
	}
}
