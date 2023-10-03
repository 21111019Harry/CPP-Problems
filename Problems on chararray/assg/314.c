#include<stdio.h>
#include<stdbool.h>

void Toggl(char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Toggl(arr,brr);

	printf("\t%s",brr);

	return 0;
}
void Toggl(char *src, char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			*src = *src+32;
		}
		else if((*src>='a') && (*src<='z'))
		{
			*src = *src-32;
		}
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest='\0';

}
