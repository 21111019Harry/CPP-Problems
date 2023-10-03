#include<stdio.h>
#include<stdlib.h>

//accept matrix from user and display addition of all L shaped sub array.
//i/p	  3 1 5 2   2
//	  6 0 1 8   14
//	  5 3 4 1   9
//	  6 5 9 2   36

//o/p	  36,6,14,2
void LShaped(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int i = 0, j = 0, iRow = 0, iCol = 0;

	printf("Entert the Row no:-");
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

	LShaped(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void LShaped(int **brr, int irow, int icol)
{
	int i = 0, j = 0, L = 0, isum = 0, a = 0, b = 0;
	for(L=0;L<icol;L++)//travel from top to bottoum
	{
		for(a=0;a<icol-L;a++)
		{
			isum = isum+brr[a][L];
		}
		//travele from left to right
		for(b=0;b<icol-L-1;b++)
		{
			isum = isum+brr[a-1][b+1+L];
		}
		printf("%d\t",isum);
		isum = 0;
	}
}
