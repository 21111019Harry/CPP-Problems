//can you write strcat without strcat
//means aaplyakde strcpy (copy) ,strlen (count) he 2 fun pahijet aani mg Copy(arr+strlen(arr),brr); asa call kraycha

#include<stdio.h>
#include<stdbool.h>

//accept 2 strings from user and compair the containts of that strings.if the string are equal then return success otherwise return failuar.(impliment strcap)
//i/p  abcd abcd o/p true , i/p abcde abcd o/p false.

bool Compair(char *First, char *Secd);
int main()
{
	char arr[20];
	char brr[20];
	int iRet = 0;

	printf("Enter the First string:");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second string:");
	scanf(" %[^'\n']s",brr);

	iRet=Compair(arr,brr);

	if(iRet==true)
	{
		printf("Success:");
	}
	else
	{
		printf("Failure:");
	}
	return 0;
}
bool Compair(char *First, char *Secd)
{
	int iCnt = 0, iCount = 0;
	while((*First!='\0') && (*Secd!='\0'))
	{
		if(*First==*Secd)
		{
			*First++;
			*Secd++;
		}
		else
		{
			break;
		}
	}
	if((*First=='\0') && (*Secd=='\0'))
	{
		return true;
	}
	else
	{
		return false;
	}

}
