#include<stdio.h>

void selectionsort(int *brr, int length);
int main()
{
	int Arr[20], i = 0, size = 0;

	printf("Enter the size:-");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter the element:-");
		scanf("%d",&Arr[i]);
	}

	selectionsort(Arr,size);
	return 0;
}
void selectionsort(int *brr, int length)
{
	int Temp = 0, i = 0, j = 0, imin = 0;

	for(i=0;i<length-1;i++)
	{
		imin = i;
		for(j=i+1;j<length;j++)
		{
			if(brr[j]<brr[imin])
			{
				imin = j;
			}
		}
		if(i!=imin)
		{
			Temp = brr[i];
			brr[i] = brr[imin];
			brr[imin] = Temp;
		}
	}
	for(i=0;i<length;i++)
	{
		printf("%d",brr[i]);
	}
}
