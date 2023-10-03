#include<stdio.h>
#include<stdbool.h>

//accept string from user and count no. of capital char from that string.
//user kdun string ghya aani ti pass kra function la mg function tyavr kahitri operation krun te o/p prt main kde pathvun deil

int String(char *str);
int main()
{
	char arr[20];//ith aapn static array ghetla karn ya arrayet aapn aapl i/p or string aapn function la pass krnar aahot mg te function tyvr kahi operation krun te o/p prt return kren.
	int iRet = 0;

	printf("Enter the string:-");
	scanf("%[^'\n']s",arr);

	iRet = String(arr);

	printf("Capital char is :-%d\n",iRet);

	return 0;
}
int String(char *str)
{
	int i = 0, iCnt = 0;

	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{

		if((*str>='A') && (*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}	
	return iCnt;
}

