#include<stdio.h>
#include<stdlib.h>

//accept matrix from user that matrix contains only 2 values as 1 an d 2. 2 indicates house and 1 indicates a streatlight we have to detect such a house which contains all the paths(horizontal and vertical) contains a strest light
//i/p   2 1 2 1 1
//      1 1 2 1 1
//      1 1 1 2 1
//      1 2 1 1 1
//      1 1 1 1 2 
//o/p  house index is (2,3),(3,1)

void HousePath(int **brr, int irow, int icol);
int main()
{
	int **arr = NULL;
	int i = 0, j = 0, iRow = 0, iCol = 0;

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

	HousePath(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
void HousePath(int **brr, int irow, int icol)
{
	int i =0, j = 0, a = 0, b = 0, c = 0, d = 0;
	bool flag = true;
	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			//ith jr aaplyala 2 sapdla mhnje house sapdl tr
			//aapn tyachya 4 side check kru left,right,upper
			//lower tyasathi he loop ahet a,b,c,d ase. ani tyat condi ahe ki to no. 1 ahe ki nahi 1 nsla
			//tr break kra loop as.
			if(brr[i][j]==2)
			{
				//left side
				for(a=0;a<j;a++)
				{
					if(brr[i][a]!=1)
					{
						flag = false;
						break;
					}
				}
				//right side
				for(b=j+1;(b<icol) && (flag==true);b++)
				{
					if(brr[i][b]!=1)
					{
						flag = false;
						break;
					}
				}
				//top or upper side
				for(c=0;(c<i) && (flag==true;c++))
				{
					if(brr[c][j]!=1)
					{
						flag = false;
						break;
					}
				}
				//down or lower side 
				for(d=i+1;(d<irow) && (flag==true);d++)
				{
					if(brr[d][j]!=1)
					{
						flag = false;
						break;
					}
				}
				if(flag==true)
				{
					printf("House Occured at:-%d,%d",i,j);
				}
			}
			flag=true;
		}
	}
}
