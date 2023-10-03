#include<stdio.h>
#include<stdbool.h>

void Count(char *src, char *dest, int iNo);
int main()
{
	char arr[20];
	char brr[20];
	int iValue = 0;

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the No:-");
	scanf(" %d",&iValue);

	Count(arr,brr,iValue);

	printf("%s",brr);

	return 0;
}
void Count(char *src, char *dest,int iNo)
{
	while((*src!='\0') && (iNo!=0))
	{
		*dest = *src;
		*src++;//or only src++;
		*dest++;//or only dest++;
		iNo--;
	}
	*dest='\0';
}
