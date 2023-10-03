#include"header1.h"

bool Binary(int **brr,int irow, int icol)
{
	int i = 0,j = 0;
	bool flag = true;
	for(i=0;i<irow && (flag==true);i++)
	{
		for(j=0;j<icol;j++)
		{
			if((brr[i][j]!=0) && (brr[i][j]!=1))
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}
