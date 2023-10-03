#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LargeDigonal(int **brr, int irow, int icol);
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

	iRet = LargeDigonal(arr,iRow,iCol);
	printf("The Largest number of Digonal is:-%d",iRet);
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
int LargeDigonal(int **brr, int irow, int icol)
{
	int i = 0, j = 0, max = 0, max1 = 0;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(brr[i]==brr[j])
			{
				max = max+brr[i][j];
			}
			else if((i+j)==(icol-1))
			{
				max1 = max1+brr[i][j];
			}
		}
	}
	if(max>max1)
	{
		return max;
	}
	else
	{
		return max1;
	}
}
