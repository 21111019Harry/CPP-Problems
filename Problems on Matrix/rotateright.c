#include<stdio.h>
#include<stdlib.h>

void rotate(int **brr, int irow, int icol);
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
	rotate(arr,iRow,iCol);
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void rotate(int **brr, int irow, int icol)
{
	int i = 0, j = 0, temp = 0;
	int new[4][4];
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			new[i][j] = brr[j][i];
			printf("%d\t",new[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			 temp = brr[j][i];
			 brr[j][i] = brr[j][icol-1];
			 brr[j][icol-1] = temp;
			 printf("%d\t",brr[i][j]);
		}
		printf("\n");
	}
}
