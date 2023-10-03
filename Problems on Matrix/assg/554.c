#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Identity(int **brr, int irow, int icol);
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
	iRet = Identity(arr,iRow,iCol);
	if(iRet==true)
	{
		printf("Identity Matrix:");
	}
	else
	{
		printf("It is Not Identity Matrix:");
	}

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
bool Identity(int **brr, int irow, int icol)
{
	int i = 0, j = 0;
	bool flag = false;
	for(i=0;i<irow && (flag=true);i++)
	{
		for(j=0;j<icol;j++)
		{
			if(i==j)
			{
				if(brr[i][j]!=1)
				{
					flag = false;
					break;
				}
			}
			else
			{
				if(brr[i][j]!=0)
				{
					flag = false;
					break;
				}
			}
		}
	}
	return flag;
}
