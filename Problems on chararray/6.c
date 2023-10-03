#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int Zero(int iSize,int arr[]);
int main()
{
	int iCnt = 0, iSize = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the No:");
	
	scanf("%d",&iSize);
	
	if(iSize<=0)
	{
		printf("Invalid Input:");
		return 0;
	}

	p =(int *)malloc(iSize*sizeof(int));   

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element:%d:- ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet = Zero(iSize,p);

	printf("Largest:- %d",iRet);

	free(p);

	return 0;
}
int Zero(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0, imax = 0, iSec = 0;
	if((arr==NULL) || (iNo<=0))
	{
		return 0;
	}
	imax = arr[0];
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt] > imax)
		{
			imax = arr[iCnt];
		}
		if(iCnt==(iNo-1))
		{
	//		iSec=imax-arr[iCnt];
	//		printf("Second Largest:- %d\t",arr[iCnt]);
	//		printf("%d\t",iSec);
		}
	}
	return imax;
	
}
