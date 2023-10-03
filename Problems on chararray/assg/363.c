#include<stdio.h>
#include<stdbool.h>


bool Concat(char *src, char *dest, int iSum);
int main()
{
	char arr[20];
	char brr[20];
	int iCnt = 5, iRet = 0;

	printf("Enter First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter Second String:-");
	scanf(" %[^'\n']s",brr);

	printf("Enter the NO:-");
	scanf(" %d",&iCnt);

	iRet = Concat(arr,brr,iCnt);

	if(iRet==true)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}
	return 0;
}
bool Concat(char *src, char *dest, int iSum)
{
	int iCnt = iSum;
	while((*src!='\0') && (*dest!='\0') && (iSum!=0))	
	{
			if(*src==*dest)
			{
				iCnt--;
				*src++;
				*dest++;
			}
			iSum--;

	}
	if(iSum==iCnt)
	{
		return true;
	}
	else
	{
		return false;
	}
}
