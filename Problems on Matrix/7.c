#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//accept a matrix from user and check weather that matrix is toeplitz are not.
//toeplitz matrix is a matrix cotains all identical digonal element
//eg 11 9  8  3  6  7 
//   5  11 9  8  3  6
//   2  5  11 9  8  3
//   1  2  5  11 9  8 
//   0  1  2  5  11 9
//   4  0  1  2  5  11
bool Toeplitz(int **brr, int irow, int icol);
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
		printf("\n");
	}

	iRet = Toeplitz(arr,iRow,iCol);
	if(iRet==true)
	{
		printf("Ture:");
	}
	else
	{
		printf("False:");
	}
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
bool Toeplitz(int **brr, int irow, int icol)
{
	int i = 0, j = 0, iCnt = 0;
	bool flag = true;
	for(i=0;i<irow-1 && (flag==true);i++)
	{
		for(j=0;j<icol-1;j++)
		{
			if((brr[i][j]!=brr[i+1][j+1]))
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}
