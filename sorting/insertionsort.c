#include<stdio.h>


void insertion(int *brr, int length);
int main()
{
	int Arr[20], i = 0, size = 0;

	printf("Enter the size:-");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&Arr[i]);
	}
	insertion(Arr,size);
	return 0;
}
void insertion(int *brr, int length)
{
	int i = 0, key = 0, j = 0;
	for(i=1;i<length;i++)
	{
		key = brr[i];
		j = i-1;
		while((j>=0) && (brr[j]>key))
		{
			brr[j+1] = brr[j];
			j--;
		}
		brr[j+1] = key;
	}
	for(i=0;i<length;i++)
	{
		printf("%d",brr[i]);
	}
}
