#include<stdio.h>
#include<stdbool.h>

void Str(char *src, char *dest, int iNo);
int main()
{
	char arr[20];
	char brr[20];
	int iValue = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);
	
	printf("Enter the NO:-");
	scanf("%d",&iValue);

	Str(arr,brr,iValue);

	printf("%s",arr);

	return 0;
}
void Str(char *src, char *dest, int iNo)
{
	while(*src!='\0')
	{
		*src++;
	}
	while((*dest!='\0') && (iNo!=0))
	{
		*src = *dest;
		*dest++;
		*src++;
		iNo--;
	}
	*dest = '\0';
}
