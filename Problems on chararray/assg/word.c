#include<stdio.h>

int word(char *src);
int main()
{
	char arr[20];
	char brr[20];
	int iRet = 0;


	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	iRet = word(arr);

	printf("%d",iRet);

	return 0;
}
int word(char *src)
{
	int iCnt = 0, i = 0;
	if(src==NULL)
	{
		return -1;
	}
	for(i=1;i<src[i]!='\0';i++)
	{
		if((src[i]==' ' && src[i-1]!=' ') || (src[i]==' ' && src[i-1]==' '))
			iCnt++;
	}
	return iCnt;
}
