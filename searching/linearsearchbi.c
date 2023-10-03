#include<stdio.h>
#include<stdbool.h>

bool linearsearchbi(int *brr, int value, int length);
int main()
{
	int Arr[20], size = 0, no = 0, i = 0, iRet = 0;

	printf("Enter the size of Array:-");
	scanf("%d",&size);

	printf("Enter the no you want to search:-");
	scanf("%d",&no);

	for(i=0;i<size;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&Arr[i]);
	}

	iRet = linearsearchbi(Arr,no,size);
	if(iRet==true)
	{
		printf("Yes:");
	}
	else
	{
		printf("No:");
	}
	return 0;
}
bool linearsearchbi(int *brr, int value, int length)
{
	int iStart = 0, iEnd = length-1;

	while(iStart<=iEnd)
	{
		if((brr[iStart==value]) || (brr[iEnd==value]))
		{
			break;
		}
		iStart++;
		iEnd--;
	}
	if(iStart<=iEnd)
	{
		return true;
	}
	else
	{
		return false;
	}
}
