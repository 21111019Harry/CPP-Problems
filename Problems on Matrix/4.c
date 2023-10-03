#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//accept matrix from user and check weather that matrix is binary matrix or not. 
//binary matrix is such a matrix which contain only 2 type of element that is 1 or 0.

bool Binary(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int i = 0, j = 0, iRow = 0, iCol = 0;
	bool iRet = 0;

	printf("Enter the Row no:-");
	scanf("%d",&iRow);

	printf("Enter the Col no:-");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int*)malloc(iCol*sizeof(int));
	}
	
	printf("Enter the Elements:-\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	iRet = Binary(arr,iRow,iCol);

	if(iRet==true)
	{
		printf("Its Binary Matrix:");
	}
	else
	{
		printf("NOT Binary Matrix:");
	}

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
bool Binary(int **brr, int irow, int icol)
{
	int i = 0, j = 0;
	bool flag = true;
	for(i=0;i<irow && (flag==true);i++)//ith aapn check krtoy ki flag true ahe ka nahitr loop chya baher ja
	{
		for(j=0;j<icol;j++)
		{
			if((brr[i][j]!=0) && (brr[i][j]!=1))
			{
				flag = false;
				break;//ha break aatlya loop la thambvto nut bahercha loop tsach firtoy mhnun aapn 
				//tyala thambvaysathi flag use kela ahe.
			}
		}
	}
	return flag;
}
