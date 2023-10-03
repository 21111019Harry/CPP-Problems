#include"header.h"//ya #include chi garj nahiye bcz te direct ith import hot tya header.h madhe aapn function ch 
//declarition kelel ahe aani ith direct functionch ghetl ahe.

int Summatrix(int **brr, int irow, int icol)
{
	int i = 0, j = 0, isum = 0;

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			isum = isum+brr[i][j];
		}
	}
	return isum;
}
int Max(int **brr, int irow, int icol)
{
	int i = 0, j = 0, iMax = 0;

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if(iMax<brr[i][j])
			{
				iMax = brr[i][j];
			}
		}
	}
	return iMax;
}
