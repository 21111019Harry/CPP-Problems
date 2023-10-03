#include<stdio.h>
#include<stdlib.h>


//accept matrix from user and replace the value of last coloumn with the summation of all digits from perticular rowi/p	     15 1  25 2   ->16	ith row madhlya digits chi addition aali pahije.
//	 7  3  21 8   ->21
//	 3  15 18 9   ->27
//	 7  0  28 26  ->25

//o/p changed matrix:-
//	 15 1  25 16
//	 7  3  21 21
//	 3  15 18 27
//	 7  0  28 25
void RowAdd(int **brr, int irow, int icol);
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
	RowAdd(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void RowAdd(int **brr, int irow, int icol)
{
	int i = 0, j = 0, iDigit = 0, sum = 0, iNo = 0;

	for(i=0;i<irow;i++)
	{
		sum = 0;
		for(j=0;j<icol;j++)
		{
			iNo = brr[i][j];//ith aapn i,j chi value variable madhe kadhun ghetoy.
			while(iNo>0)
			{
				iDigit = iNo%10;
				sum = sum+iDigit;
				iNo=iNo/10;
			}
		}
		brr[i][j-1] = sum;//ith aapn ti row chi addition shevtcya coloumn madhe toktoy
	}
}
