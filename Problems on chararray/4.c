#include<stdio.h>
#include<stdbool.h>



//accept string from user and calculate length of that string.

int Cal(char *ch);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the string:");
	scanf("%[^'\n']s",arr);

	iRet = Cal(arr);

	printf("%d",iRet);

	return 0;
}
int Cal(char *ch)
{
	int iCnt = 0;

	if(ch==NULL)
	{
		return -1;
	}
	while(*ch!='\0')
	{

		iCnt++;
		ch++;
	}
	return iCnt;
}
