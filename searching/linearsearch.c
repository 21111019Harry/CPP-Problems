#include<stdio.h>
#include<stdbool.h>

bool search(int *brr,int length,int value);
int main()
{
	int Arr[20], size = 0, i = 0, iRet = 0, no = 0;
	printf("Enter the size of array:-");
	scanf("%d",&size);
	printf("Enter the no you want to search:-");
	scanf("%d",&no);

	for(i=0;i<size;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&Arr[i]);
	}

	iRet = search(Arr,size,no);
	if(iRet==true)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
bool search(int *brr, int length, int value)
{
	int i = 0;

	for(i=0;i<length;i++)
	{
		if(brr[i]==value)
		{
			break;
		}
	}
	if(i==length)
	{
		return false;
	}
	else
	{
		return true;
	}
}
