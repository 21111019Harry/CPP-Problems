#include<stdio.h>
#include<stdbool.h>

void Cpyrev(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Cpyrev(arr,brr);

	printf("\t%s",brr);

	return 0;
}
void Cpyrev(char *src, char *dest)
{
	int iCnt = 0;
	char *End = src;
	while(*End!='\0')
	{
		iCnt++;
		*End++;
	}
	*End--;
	while((*End!=iCnt))
	{
		*dest = *End;
		*dest++;
		*End--;
	}
	*dest='\0';
}
