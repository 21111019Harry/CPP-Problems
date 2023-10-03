#include<stdio.h>
#include<stdbool.h>

void bubble(int *brr, int length);
int main()
{
	int Arr[20], size = 0, i = 0;

	printf("Enter the size:-");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter the element:-");
		scanf("%d",&Arr[i]);
	}
	bubble(Arr,size);
	return 0;
}
void bubble(int *brr, int length)
{
	int imin = 0, Temp = 0, i = 0, j = 0;
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
