#include<stdio.h>

int length(char *src);
int main()
{
	int i = 0;
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	i = length(arr);

	printf("%d\n",i);

	return 0;
}
int length(char *src)
{
	int iMax = 0, i = 0, iCnt = 0;
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z') || (*src>='a') && (*src<='z'))
		{
			*src++;
			iCnt++;
		}
		else if(*src==' ') 
		{
			if(iMax<iCnt)
			{
				iMax = iCnt;
			}
			iCnt = 0;
			*src++;
		}
	}
	if(iMax<iCnt)
	{
		iMax = iCnt;
	}
	return iMax;
}
