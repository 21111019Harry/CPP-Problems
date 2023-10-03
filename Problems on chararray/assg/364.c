#include<stdio.h>
#include<stdbool.h>

void Reverse(char *src);
int main()
{
	char arr[20];
//	char brr[20];
	int iRet = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Reverse(arr);

	printf("%s",arr);

	return 0;
}
void Reverse(char *src)
{
	char Temp = '\0';
  	char *Start = src;
    	char *End = src;	
	int i= 0;

	while(*End!='\0')
	{
		*End++;
	}
	End--;
	while(Start<End)
	{
		if((*Start>='A') && (*Start<='Z'))
		{
			*Start = *Start+32;
		}
		else if((*Start>='a') && (*Start<='z'))
		{
			*Start = *Start-32;
		}
		Temp = *Start;
		*Start = *End;
		*End = Temp;
		Start++;
		End--;
	}


}
