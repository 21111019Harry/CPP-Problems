#include<stdio.h>
#include<stdbool.h>

void Corresponding(char ch);
int main()
{
	char cValue = '\0';

	printf("Enter the Char:");
	scanf("%c",&cValue);

	Corresponding(cValue);

	return 0;
}
void Corresponding(char ch)
{
	char C, S;

	if((ch>='A') && (ch<='Z'))
	{
		ch = ch+32;
		printf("%c",ch);
        printf("\n");
	}
	else if((ch>='a') && (ch<='z'))
	{
		ch = ch-32;
		printf("%c",ch);
        printf("\n");
	}
	else
	{
		printf("%c",ch);
        printf("\n");
	}

}
