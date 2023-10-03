#include<stdio.h>
#include<string.h>

int rev(char *src);
int main()
{
	char arr[20];
//	char brr[20];
//	int iRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	rev(arr);

	return 0;
}
int rev(char src[])
{
	int  i = 0, j = 0;
	while(src[i]!='\0')
	{
		if(src[i]==' ')
		{
			j= i-1;
			while(j>=0 && src[j]!=' ')
			{
				printf("%c",src[j]);
				j--;
			}
			printf(" ");
		}
		i++;
	}
	j = i-1;
	while(j>=0 && src[j]!=' ')
	{
		printf("%c",src[j]);
		j--;
	}
	printf(" ");
}
