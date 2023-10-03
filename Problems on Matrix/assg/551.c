#include<stdio.h>
#include<stdlib.h>

void Transpose(int **brr, int irow, int icol);
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

	Transpose(arr,iRow,iCol);
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void Transpose(int **brr, int irow, int icol)
{
	int i = 0, j = 0;
	int new[4][4];
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			printf("%d\t",brr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			new[i][j] = brr[j][i];
			printf("%d\t",new[i][j]);
		}
		printf("\n");
	}
}
