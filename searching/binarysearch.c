#include<stdio.h>
#include<stdbool.h>

bool binarysearch(int *brr, int value, int length);
bool linearsearch(int *brr, int value, int length);
bool checksorted(int *brr, int value, int length);
int main()
{
	int Arr[20], no = 0, size = 0, i = 0, iRet = 0;

	printf("Enter the size of array:-");
	scanf("%d",&size);

	printf("Enter the no you want to search:-");
	scanf("%d",&no);

	for(i=0;i<size;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&Arr[i]);
	}

	iRet = binarysearch(Arr,no,size);

	if(iRet==true)
	{
		printf("Yes:");
	}
	else
	{
		printf("No:");
	}
}
bool binarysearch(int *brr, int value, int length)
{
	int iStart = 0, iEnd = length-1, mid = 0;
	bool bRet = false;
	bRet = checksorted(brr, value, length);
	if(bRet==false)
	{
		return linearsearch(brr, value, length);
	}
	else
	{
		while(iStart<=iEnd)
		{
			mid = (iStart+iEnd)/2;

			if(brr[mid]==value)
			{
				break;
			}
			else if(value>brr[mid])
			{
				iStart = mid+1;
			}
			else if(value<brr[mid])
			{
				iEnd = mid-1;
			}
		}
		if(brr[mid]==value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
bool checksorted(int *brr, int value, int length)
{
	int i = 0;

	for(i=0;i<length-1;i++)
	{
		if(brr[i]>brr[i+1])
		{
			break;
		}
	}
	if(i==length-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool linearsearch(int *brr, int value, int length)
{
	int  i = 0;

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
