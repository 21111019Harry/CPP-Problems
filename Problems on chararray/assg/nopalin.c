#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>




int Palin(int iNo);
int main()
{
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter the NO:-");
	scanf("%d",&iValue);

	iRet = Palin(iValue);

//	printf("%d",iRet);

	if(iRet==iValue)
	{
		printf("Palindrome:-");
	}
	else
	{
		printf("Not Palindroem:-");
	}
	return 0;
}
int Palin(int iNo)
{
	int iDigit = 0;
	int iRev = 0;

	while(iNo!=0)
	{
		iDigit = iNo%10;
		iRev = (iRev*10)+iDigit;
		iNo = iNo/10;
	}
/*	if(iRev==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}*/
	return iRev;
}
