#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void ColRev(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int iRow = 0, iCol = 0, i = 0, j = 0;

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

	ColRev(arr,iRow,iCol);
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void ColRev(int **brr, int irow, int icol)
{
	int i = 0, j = 0;

	for(i=irow-1;i>=0;i--)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",brr[i][j]);
		}
		printf("\n");
	}
}
