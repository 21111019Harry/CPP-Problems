#include<stdio.h>
#include<stdlib.h>


int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	CheckSpelled(arr,brr);

	return 0;
}
void CheckSpelled(char *src, char *dest)
{
	if((src==NULL) || (src==NULL))  //filter when string is empty
	{
		return ;
	}
	while((*src!='\0') && (*dest!='\0'))
	{
		if(*src == *dest)
		{
			*src++;
			*dest++;
		}
		else
		{
			break;
		}
	}

}
