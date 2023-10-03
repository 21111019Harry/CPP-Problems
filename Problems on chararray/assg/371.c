#include<stdio.h>
#include<stdbool.h>

int Count(char *src);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	iRet = Count(arr);

	printf("%d",iRet);

	return 0;
}
int Count(char *src)
{
	int iCnt = 0, i =0;
	if(src==NULL)
	{
		return -1;
	}
	for(i=1;i<src[i]!='\0';i++)
	{
		if(src[i]==' ' && src[i-1]!=' ')
		{
			iCnt++;
		}
	}
	return iCnt+1;
}
