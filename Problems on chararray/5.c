#include<stdio.h>
#include<stdbool.h>

void palindrome(char *brr);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);
    
    palindrome(arr);
}
void palindrome(char *brr)
{
    char *start = brr;
    char *end = brr;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start <= end)
    {
        if(*start == *end)
        {
            start++;
            end--;
        }
        else
        {
            break;
        }
    }
    if(start < end)
    {
        printf("NO:");
        printf("\n");
    }
    else
    {
        printf("YES:");
        printf("\n");
    }
}
