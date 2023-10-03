#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Add(int ***brr, int ifirst, int second, int ithired);
int main()
{
	int ***arr = NULL;
	int iFirst = 0, iSecond = 0, iThired = 0, i = 0, j = 0, k = 0;

	printf("Enter the First no:-");
	scanf("%d",&iFirst);

	printf("Enter the Second no:-");
	scanf("%d",&iSecond);

	printf("Enter the Thired no:-");
	scanf("%d",&iThired);

	arr = (int***)malloc(iFirst*sizeof(int**));

	for(i=0;i<iFirst;i++)
	{
		arr[i] = (int**)malloc(iSecond*sizeof(int*));
	}
	for(i=0;i<iFirst;i++)
	{
		for(j=0;j<iSecond;j++)
		{
			arr[i][j] = (int*)malloc(iThired*sizeof(int));
		}
	}

	printf("Enter the Elements:\n");

	for(i=0;i<iFirst;i++)
	{
		for(j=0;j<iSecond;j++)
		{
			for(k=0;k<iThired;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	Add(arr,iFirst,iSecond,iThired);

	for(i=0;i<iFirst;i++)
	{
		for(j=0;j<iSecond;j++)
		{
			free(arr[i][j]);
		}
	}
	for(i=0;i<iFirst;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void Add(int ***brr, int ifirst, int isecond, int ithired)
{
	int i = 0, j = 0, k = 0, sum = 0;
	for(i=0;i<ifirst;i++)
	{
		for(j=0;j<isecond;j++)
		{
			for(k=0;k<ithired;k++)
			{
				sum = sum+brr[i][j][k];
			}
		}
	}
	printf("%d",sum);
}
