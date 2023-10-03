#include<stdio.h>
#include<stdlib.h>

void ColSwap(int **brr, int iroe, int icol);
int main()
{
	int **arr = NULL;
	int i = 0, j = 0, iRow = 0, iCol = 0;

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

	ColSwap(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void ColSwap(int **brr, int irow, int icol)
{
	int i = 0, j = 0;
	for(i=0;i<irow;i++)
	{
		for(j=icol;j>=0;j--)
		{
			brr[j][i] = brr[i+1][j+1];
		//	printf("%d\t",brr[i][j]);
		}
	}
}
