#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void ColAddition(int **brr, int irow, int icol);
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

	printf("Enter the Element:\n");

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	ColAddition(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void ColAddition(int **brr, int irow, int icol)
{
	int i = 0, j = 0, sum = 0, sum1 = 0;

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			sum = sum+brr[i][j];
			sum1 = sum1+brr[j][i];
		}
		printf("Row Addition:%d\n",sum);
		printf("Coloumn Addition:%d\n",sum1);
		sum = 0;
		sum1 = 0;
	}
}
