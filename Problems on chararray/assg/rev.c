#include<stdio.h>

void rev(char *src, char *dest);
int main()
{
	char arr[30];
	char brr[30];

	printf("Enter the First String:-");
	scanf("%[^'\n']d",arr);

/*	printf("Enter the Second String:-");
	scanf("%[^'\n']s",brr);*/

	rev(arr,brr);

	printf("%s\n",brr);

	return 0;
}
void rev(char *src, char *dest)
{
	int iCnt = 0;
	char *End = src;
	while(*End!='\0')
	{
		iCnt++;
		*End++;
	}
	printf("%d\n",iCnt);
	*End--;
	while(*End!=iCnt)//(*End!=*src--)
	{
		*dest = *End;
		*dest++;
		End--;
	}
	*dest = '\0';
}
