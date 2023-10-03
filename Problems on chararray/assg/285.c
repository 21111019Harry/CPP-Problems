#include<stdio.h>
#include<stdbool.h>


int Space(char *ptr);
int main()
{
	char arr[20];
	int cRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	cRet = Space(arr);

	printf("White Space:- %d",cRet);

	return 0;
}
int Space(char *ptr)
{
	int iCnt = 0;
	if(ptr==NULL)
	{
		return -1;
	}
	while(*ptr!='\0')
	{
		if(*ptr==' ')
		{
			iCnt++;
		}
		*ptr++;
	}
	return iCnt;
}
