#include<stdio.h>
#include<stdbool.h>


//accept 2 char from user and swap the contain of that char.

void Rev(char *p,char *q);
int main()
{
	char ch, ch1;

	printf("Enter 2 Char:-");
	scanf("%c%c",&ch,&ch1);

	printf("Before swapping :- %c%c\n",ch,ch1);

	Rev(&ch,&ch1);

	printf("After swapping :- %c%c\n",ch,ch1);

	return 0;
}
void Rev(char *p,char *q)
{
	char T ;
	
	T=*p;
	*p=*q;
	*q=T;
	return ;
}


