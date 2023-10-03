#include<stdio.h>
#include<stdlib.h>

int Digonal(int **brr, int irow, int icol);
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

	iRet = Digonal(arr,iRow,iCol);

	printf("Digonal Elements Addition is:-%d",iRet);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}

	free(arr);
	return 0;
}
int Digonal(int **brr, int irow, int icol)
{
	int i = 0, j = 0, isum = 0;

	for(i=0;i<irow;i++)	
	{
		for(j=0;j<icol;j++)
		{
			if(brr[i]==brr[j])
			{
				isum = isum+brr[i][j];
			}
		}
	}
	return isum;
}
