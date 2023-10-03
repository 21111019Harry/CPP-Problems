#include<stdio.h>
#include<stdlib.h>

//accept matrix from user which contaian information about the specific area. 
//matrix contaion only 2 types of elements that is 1 and 0. 1 indicates land and 0 indicates water.
//we have to find out all such lands which are completely surrounded by water.
//in a single matrix their may be a possibilities of 0 or more such lands.
//after getting a specified land we have to display its index.
//means find iceland in given matrix.
/* i/p	1 0 0 0 1 0 0
	0 1 0 0 0 1 0
	1 0 0 1 0 0 0
	0 0 0 0 0 1 0
	0 1 0 1 0 0 0
	0 1 0 1 0 0 0
	0 0 0 0 1 0 0
 	1 1 1 0 0 0 1 
o/p 	total iceland occurred at (2,3),(3,5) */

void Iceland(int **brr, int irow, int icol);
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

	Iceland(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void Iceland(int **brr, int irow, int icol)
{
	int i = 0, j = 0, iCnt = 0;
	//ith aaplyala matrix chya 4 baju skip kraychya ahet mhnun aapn loop 1 pasun start kela ahe
	//aani irow-1 pryant firvt ahe.
	for(i=1;i<irow-1;i++)
	{
		for(j=1;j<icol-1;j++)
		{
			if(brr[i][j]==1)	
			{
				if((brr[i-1][j-1]==0) && 
				(brr[i-1][j]==0) && 
				(brr[i+1][j+1]==0) && 
				(brr[i][j+1]==0) &&
				(brr[i+1][j+1]==0) &&
				(brr[i+1][j]==0) &&
				(brr[i+1][j-1]==0) &&
				(brr[i][j-1]==0))//1,2 1,3 1,4 2,4 3,4 3,3 3,2 2,2 
				{
					printf("Iceland Occured at:- %d,%d\n",i,j);
					iCnt++;
				}
			}
		}
	}
	printf("Total no of Icelands are:- %d",iCnt);
}
