#include<stdio.h>
#include<stdbool.h>



int Reverse(char *ch);
int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the String: ");
	scanf("%[^'\n']s",&arr);

	iRet=Reverse(arr);

	printf("%d",iRet);

	return 0;
}
int Reverse(char *ch)
{
	int iCnt = 0;

	if(ch==NULL)
	{
		return -1;
	}

	while(*ch!='\0')
	{
		if((*ch>='a') && (*ch<='z'))
		{
			iCnt++;
		}
		ch++;
	}
	return iCnt;
}
