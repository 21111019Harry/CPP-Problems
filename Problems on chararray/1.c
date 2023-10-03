#include<stdio.h>
#include<stdbool.h>


//write a program which display ASCII table.
void Display();
int main()
{
	Display();
}
void Display()
{
	int iCnt = 0;

	printf("Char ASCII value:\n");

	for(iCnt=0;iCnt<123;iCnt++)
	{
		printf("%d %x %c %o\n",iCnt,iCnt,iCnt);
	}
}
//consider some imp ASCII value digites Capital char,Small char
//0 48 1 49 2 50..........
//A 65 B 66 C 67.........
//a 97 b 98 c 99.........
