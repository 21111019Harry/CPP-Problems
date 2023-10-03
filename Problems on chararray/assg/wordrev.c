#include<stdio.h>

char arr[20];
int Top = -1;
int iSize = 10;


void Push(char *src)
{

	if(Top==iSize-1)
	{
		printf("Stack is Full:");
	}
	Top++;
	arr[Top] = *src;
}
int Pop()
{
	char no;
	if(Top==-1)
	{
		printf("Stack is Empty:-");
	}
	else
	{
		no = arr[Top];
		Top--;
		return no;
	}
}
int main()
{

	char arr[20];

	printf("Enetr the String:-");
	scanf("%s",&arr);

	Push(arr);

	printf("%s",Pop());

//	Display();
}
