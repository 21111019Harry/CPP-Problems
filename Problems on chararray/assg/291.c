#include<stdio.h>
#include<stdbool.h>


int Check(char *ptr,char ch);
int main()
{
	char cValue;
	char arr[20];
	int iRet = 0;
	

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);//ith he special scanf function ahe mhnje he user la sangt ki tu i/p de jopryant tu enter press krt nahi topryant mhnje he aapn press kelela enter pn ghet. mg aapn pudh jato pn mg aapn jr yanantr sadha scanf lihla tr to run hot nahi karn sadha scanf mhnto ki value de aani enter press kr. pn ith aapn special scanf madhe aadhich enter dilela ahe mhnun he ithwork hot nahi tyasathi aapn khalchya scanf madhe %c chya aadhi space dila ahe.aani 2nd option ahe to mhnje flush or fflash(stdin) he lihav.


	printf("Enter the Char you want:-");
	scanf(" %c",&cValue);

	iRet=Check(arr,cValue);

	if(iRet==true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

	return 0;
}
int Check(char *ptr,char ch)
{
	if((ptr==NULL))
	{
		return -1;
	}
	while(*ptr!='\0')
	{
		if(*ptr==ch)
		{
			return true;
		}
		ptr++;
	}
}
