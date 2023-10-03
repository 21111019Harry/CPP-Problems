#include<stdio.h>
#include<stdlib.h>

int Frequency(int **brr, int irow, int icol, int check);
int main()
{
	int **arr = NULL;
	int i = 0,  j = 0, iRow = 0, iCol = 0, iRet = 0, no = 0;

	printf("Enter the Row no:-");
	scanf("%d",&iRow);

	printf("Enter the Col no:-");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int*)malloc(iCol*sizeof(int));
	}

	printf("Enter the Elements:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	printf("Enter the no you want check:-");
	scanf("%d",&no);

	iRet = Frequency(arr,iRow,iCol,no);

	printf("Frequency of %d is :-%d",no,iRet);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
int Frequency(int **brr, int irow, int icol, int check)
{
	int i = 0,  j = 0, iCnt = 0;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(brr[i][j]==check)
			{
				iCnt++;
			}
		}
	}
	return check;
}
