#include<stdio.h>
#include<stdbool.h>

void Concate(char *src,const char *dest);
int main()
{
	char arr[30];
	char brr[30];

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	Concate(arr,brr);

	printf("%s",arr);

	return 0;
}
void Concate(char *src,const char *dest)//yaha const he bcz dest change nahi hoga but src change hoga.
{
	if((src==NULL) || (dest==NULL))
	{
		return ;
	}
	while(*src!='\0')
	{
		*src++;//or src++
	}
	while(*dest!='\0')
	{
		*src = *dest;
		*src++;//or only src++;
		*dest++;//or only dest++;
	}
	*src=='\0';
//yaha hamne src main last main \0 dala means wo ab src ke last main jayega bcz jo first while loop main src ke last main jo \0 tha usko hame aage shift krna possibal nahi tha isliye src ke last \0 pe dest ka 1st char override hogya and wo \0 delete hogya isliye hamne yaha src main last \0 put kiya.
}
