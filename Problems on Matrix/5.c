#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//accept matrix from user and check weather that matrix is identity matrix or not
//identity matrix is such a matrix which contains digonal element as 1 and non digonal element as 0.

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
		arr[i]=(int*)malloc(iCol*sizeof(int));
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

	iRet = Identity(arr,iRow,iCol);

	if(iRet==true)
	{
		printf("It is identity matrix:");
	}
	else
	{
		printf("It is not identity matrix:");
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
	bool flag = true;
	if(irow!=icol)
	{
		return false;
	}
	for(i=0;i<irow && (flag==true);i++)//ith aapn flag check krtoy flag true ahe ka nahitr tyala baher kadtoy
	{
		for(j=0;j<icol;j++)
		{
			if(i==j)//ith aapn digonal elements check krtoy ki te same ahet ki nahi
			{
				if(brr[i][j]!=1)//ith aapn digonal 1 nasla tr break krtoy
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
