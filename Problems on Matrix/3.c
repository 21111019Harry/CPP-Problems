#include<stdio.h>
#include<stdlib.h>


//accept matrix from user and display addition of all the elements from each row sepretily.

void Rowaddition(int **brr, int irow, int icol);
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

	printf("Enter the Element:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	Rowaddition(arr,iRow,iCol);
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void Rowaddition(int **brr, int irow, int icol)
{
	int i = 0, j = 0, isum = 0;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			isum = isum+brr[i][j];
		}
		printf("%d\t",isum);
		isum = 0;
	}
}
