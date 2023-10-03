#include<stdio.h>

void Pattern(int irow, int icol);
int main()
{
	int iRow = 0, iCol = 0;

	printf("Enter the Row no:-");
	scanf("%d",&iRow);

	printf("Enter the iCol no:-");
	scanf("%d",&iCol);

	Pattern(iRow,iCol);
	return 0;
}
void Pattern(int irow, int icol)
{
	int i = 0, j = 0;

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
		{
			if((i+j)==(icol-1))
			{
				printf(" *");
			}
			else if(i>j)
			{
				printf(" #");
			}
			else
			{
				printf(" $");
			}
		}
		printf("\n");
	}
}
