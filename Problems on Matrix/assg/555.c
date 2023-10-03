#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Sparse(int **brr, int irow, int icol);
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
	printf("Enter the Elements:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	iRet = Sparse(arr,iRow,iCol);

	if(iRet==true)
	{
		printf("Sparse Matrix:");
	}
	else
	{
		printf("NOT Sparse Matrix:");
	}
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
bool Sparse(int **brr, int irow, int icol)
{
	int i = 0, j = 0;
	int rem = irow*icol;
	int exp = (irow*icol)/2;
	for(i=0;i<irow && (exp>0) && (rem>exp);i++)
	{
		for(j=0;j<icol && (exp>0) && (rem>exp);j++)
		{
			if(brr[i][j]==0)
			{
				exp--;
			}
			rem--;
		}
	}
	if(exp==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
