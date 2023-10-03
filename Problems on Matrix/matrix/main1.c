#include"header1.h"



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

	printf("Enter the Elements:\n");
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
		printf("Not Binary Matrix:");
	}
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
