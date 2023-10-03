#include<stdio.h>
#include<stdlib.h>


//accept matrix from user and perform the summation of all elements from that matrix
//eg 1 2 1 2 o/p 24
//   1 2 1 2
//   1 2 1 2
//   1 2 1 2 

int Summatrix(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0;

	printf("Enter the iRow:-");
	scanf("%d",&iRow);

	printf("Enter the iCol:-");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int *)malloc(iCol*sizeof(int));
	}
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	iRet = Summatrix(arr,iRow,iCol);

	printf("%d",iRet);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
int Summatrix(int **brr, int irow, int icol)//or (int brr[][], int iRow, int Col)
{
	int isum = 0, i = 0, j = 0;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			isum = isum+brr[i][j];
		}
	}
	return isum;
}
//28.20 time 34.12
