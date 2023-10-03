#include<stdio.h>
#include<stdbool.h>

void bubble(int *brr, int length);
int main()
{
	int Arr[20], size = 0, i = 0;

	printf("Enter the size of array:-");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&Arr[i]);
	}

	bubble(Arr,size);
	return 0;
}
void bubble(int *brr, int length)
{
	bool sort = false;
	int pass = 0, i = 0, Temp = 0;
	for(pass=1;pass<length;pass++)
	{
		sort = false;
		for(i=0;i<length-pass;i++)
		{
			if(brr[i]>brr[i+1])
			{
				Temp = brr[i];
				brr[i] = brr[i+1];
				brr[i+1] = Temp;
				sort = true;
			}
		}
		if(sort==false)
		{
			break;
		}
	}
	for(i=0;i<length;i++)
	{
		printf("%d",brr[i]);
	}
}
