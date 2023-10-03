#include<stdio.h>
#include<stdbool.h>



int Capital(char *ch);
int main()
{
/*	char arr[20];
	int iRet = 0;

	printf("Enter the String:");
	scanf("%[^'\n']s",arr); */

    char arr[20];
    int iRet = 0;

    //he fgets function newline pryant mhnje aapn enter press krto toparyant string accept krt same special scanf sarkh
    printf("Enter the string:-");
    fgets(arr,sizeof(arr),stdin);

	iRet = Capital(arr);

	printf("%d \n",iRet);

	return 0;
}
int Capital(char *ch)	
{
	int iCnt = 0;

	while(*ch!='\0')
	{
		if((*ch>='A') && (*ch<='Z'))
		{
			iCnt++;
		}
		ch++;
	}
	return iCnt++;
}
