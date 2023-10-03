#include<stdio.h>
#include<stdbool.h>


void Display();

int main()
{
	Display();

}
void Display()
{
	int i = 0;
	for(i=0;i<123;i++)
	{
		printf("%d %x %c\n",i,i,i);
	}
}
