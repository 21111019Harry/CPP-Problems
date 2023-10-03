#include<stdio.h>

void swap(char *src, char *des);
int main()
{
	char arr[20];
	char brr[30];

	printf("Enter the first String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	swap(arr,brr);

	printf("%s\n",arr);
	printf("%s",brr);

	return 0;
}
void swap(char *src, char *des)
{
	char Temp = '\0';

	while(*src!='\0')
	{
		Temp = *src;
		*src = *des;
		*des = Temp;
		*src++;
		*des++;
	}
	*src = '\0';
	*des = '\0';
}
