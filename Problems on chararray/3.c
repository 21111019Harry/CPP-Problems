#include<stdio.h>
#include<stdbool.h>

//
//char arr[10] = "Hello";
//   '\0','\n','\t','\v','\b',...etc   escape sequence mhntat jyanchya aadhi \asto tyana escape sequence mhntat.
// in c char size is 1 byte,in c++ char size is 1 byte but here wchar_t ha datatype ahe aani yachi size 2 byte ahe,aani java madhe char chi size 2 byte ahe.
//java la unicode compliant lang. mhntat karn ti character lach 2 byte size dete mhnun.
//char brr[10]={h,e,l,l,o,\0};


int Count(char *p);
int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);//special scanf
	//scanf la aaplyala format specifier dyava lagto te aapn %d,%f,%ld,%c,%s,%x,... as deto decimal,float,double,character,string,hexadecimal,...etc
	//%s mhnto ki we accept the character till you press space bar but aaplyala string dyachiye tr tyat space asto mhnje aapn i/p dil aapl name 'harshal nikam' aata ith space aala mg te ks accept kraych tr tyasathi aapn tyala sangu ki user enter press krt nahi topryant ghe tr tyala he ks sangnar tr te aapn as sangnar:-scanf("%[^'\n']s",arr);

//puts() function he pn i/p ghyasathi ch function ahe scanf sarkh.same tsach gets() he. getc() ,putc()
	iRet = Count(arr);

	printf("The No. is %d",iRet);

	return 0;
}
int Count(char *p)
{
	int iCnt = 0;
	if(p==NULL)
	{
		return -1;
	}
	while(*p!='\0')
	{
		if((*p>='A') &&  (*p<='Z') || (*p>='a') && (*p<='z'))
		{
			iCnt++;
		}
		p++;
	}
	return iCnt;
}
