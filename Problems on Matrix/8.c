#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//accept a matrix from user and return the summation of each digonal of that matrix.
int DigoSum(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0;

	printf("Enter the Row no:-");
	scanf("%d",&iRow);

	printf("Enter the Col no:-");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int*)malloc(iCol*sizeof(int));
	}

	printf("Enter the Element:\n");

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	iRet = DigoSum(arr,iRow,iCol);

	if(iRet==true)
	{
		printf("Yes:");
	}
	else
	{
		printf("NO");
	}	
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
int DigoSum(int **brr, int irow, int icol)
{
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{

		}
	}
	for(i=0;i<iroe;i++)
	{
		for(j=0;j<icol;j++)
		{
			
		}
	}
}
